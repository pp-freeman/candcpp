### 编译链接
 > g++ -c testcpp.cpp -o testcpp.o //编译为二进制文件
 > gcc -c main.c -o main.o
 > gcc -o main -c main.o testcpp.o -lstdc++ //链接二进制文件
### 查看二进制文件内容
 > nm *.o

## az_ntt
 > 将cppkafka移动至/usr/include
 > 将.so移动至/usr/lib64
 > g++ -c kafka_producer.cpp  -o kafka_producer.o
 > g++ -c kafka_producer2c.cpp  -o kafka_producer2c.o
 > gcc main.o kafka_producer.o kafka_producer2c.o -o main -lstdc++ -lrdkafka -lcppkafka