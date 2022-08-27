//
// Created by root on 2022/8/26.
//

#ifdef __cplusplus
extern "C" {
#endif
#include "testcpp.h"
#ifdef __cplusplus
}
#endif

#include <iostream>
#include <string>
using namespace std;

void testcpp() {
    string  *strTest = new string ("this easy test!!!");
    std::cout<< *strTest;
}
