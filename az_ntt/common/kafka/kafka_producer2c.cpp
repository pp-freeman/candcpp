//
// Created by root on 2022/8/28.
//


#ifdef __cplusplus
extern "C" {
#endif
#include "kafka_producer2c.h"
#ifdef __cplusplus
}
#endif
#include "kafka_producer.cpp"
#include <string>

int producerMessage2kafka(char *message) {
    std::cout << "this producerMessage2kafka test";
    AzKafkaProducer *azKafkaProducer = new AzKafkaProducer("127.0.0.1", 9001);
    azKafkaProducer->TestMessage(message);
    string mesage = message;
    azKafkaProducer->PostMessage(eMsg_FileInfo, mesage);
}
