//
// Created by root on 2022/8/28.
//

#include "kafka_producer.cpp"

int main() {
    AzKafkaProducer *azKafkaProducer = new AzKafkaProducer("127.0.0.1",90);
    string test = "qwqweqw";
    azKafkaProducer->PostMessage(eMsg_FileInfo, test);
}