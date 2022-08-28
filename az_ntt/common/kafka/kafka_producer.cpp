#include "cppkafka/cppkafka.h"
#include <sstream>
#include <memory>
#include <iostream>
#include <map>
using namespace std;
using namespace cppkafka;
using cppkafka::MessageBuilder;


enum AzNttMessageType {
    eMsg_Alert,             // 告警日志
    eMsg_Flow,              // 会话日志
    eMsg_FileInfo           // 文件还原信息
};


class AzKafkaProducer {

public:
    AzKafkaProducer(string ip, uint16_t port) {
        stringstream ss;
        ss << ip << ":" << port; 
        this->_config = {
            { "group.id", "ntt_cpp_group" },
            { "metadata.broker.list", ss.str() },
            { "enable.auto.commit", false }
        };
        
        this->producer = make_shared<Producer>(this->_config);

        this->_msg_builder_map[eMsg_Alert] = make_shared<MessageBuilder>("ntt_topic_alert");
        this->_msg_builder_map[eMsg_Flow] = make_shared<MessageBuilder>("ntt_topic_flow");
        this->_msg_builder_map[eMsg_FileInfo] = make_shared<MessageBuilder>("ntt_topic_fileinfo");
    }

    ~AzKafkaProducer() {

    }

    void PostMessage(AzNttMessageType msg_type, string &msg) {
        std::cout << "this PostMessage";
        this->producer->produce(_msg_builder_map[msg_type]->payload(msg));
        this->producer->flush();
    }

    void TestMessage(char *msg) {
       std::cout << "this kafka_producer TestMessage: " << msg;
    }

private:
    Configuration _config;
    shared_ptr<Producer> producer;
    map<AzNttMessageType, shared_ptr<MessageBuilder>> _msg_builder_map;
};
