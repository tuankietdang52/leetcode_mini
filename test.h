#include <bits/stdc++.h>

// include cpp file because testcase file are using template
#include "testcase.cpp"
#include "testcasevector.cpp"
#include "config/config.cpp"

using namespace std;

#ifndef TEST_H
#define TEST_H

class Test{
public:
    void testing();
    bool case1();
    bool case2();
    bool case3();
    
    template <typename T1, typename T2, typename T3, typename T4>
    bool runTestCase(T1 expected, T2 para1, T3 para2 = 0, T4 para3 = 0);
    
    template <typename T1, typename T2, typename T3, typename T4>
    bool runTestCaseVector(vector<T1> expected, T2 para1, T3 para2 = 0, T4 para3 = 0);
};

#endif