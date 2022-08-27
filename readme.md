### 编译链接
g++ -c testcpp.cpp -o testcpp.o //编译为二进制文件
gcc -c main.c -o main.o
gcc -o main -c main.o testcpp.o -lstdc++ //链接二进制文件


### 查看二进制文件内容
nm *.o