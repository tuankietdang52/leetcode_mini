#include <bits/stdc++.h>

// include cpp file because testcase file are using template
#include "testcase.cpp"

using namespace std;

#ifndef TEST_H
#define TEST_H

#define RESET  "\033[0m"
#define RED    "\033[31m"      /* Red */
#define GREEN  "\033[32m"      /* Green */

#define NONE int

class Test{
public:
    void testing();
    bool case1();
    bool case2();
    bool case3();
};

#endif