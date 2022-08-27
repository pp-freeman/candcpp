//
// Created by root on 2022/8/27.
//
#ifdef __cplusplus
extern "C" {
#endif

#include "testClassMid.h"

#ifdef __cplusplus
}
#endif

#include "testClass.h"
#include <map>
#include <iostream>
#include <string>

void testClassMid() {
    TestClass::testClass();
}

void test1() {
    map <string, string> map1;
    map1.insert(pair<string , string>("pengpan", "test"));
    map1.insert(pair<string , string>("chucnhun", "test"));
    map1.insert(pair<string , string>("chucnhun1", "test"));
    map1.insert(pair<string , string>("chucnhun2", "test"));
    for (auto m : map1) {
        cout << "key is " << m.first << ", value is " << m.second << endl;
    }
}