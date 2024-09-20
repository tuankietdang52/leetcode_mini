#ifndef TESTCASE_H
#define TESTCASE_H

#include <bits/stdc++.h>
#include "code.cpp"

using namespace std;

#define RED "\033[31m" 

template <typename T1, typename T2, typename T3, typename T4> 
class TestCase{
public:
    T1 expected;
    T1 result;
    Solution<T1, T2, T3, T4> sol;

    TestCase(T1 expected);
    void run(T2 para1, T3 para2 = 0, T4 para3 = 0);
    bool isPassed();
};

#endif