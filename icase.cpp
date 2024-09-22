#ifndef ICASE_H
#define ICASE_H

#include <bits/stdc++.h>
#include "code.cpp"

using namespace std;

template <typename T1, typename T2, typename T3, typename T4> 
class ICase{
public:
    virtual void run(T2 para1, T3 para2, T4 para3) {}
    virtual bool isPassed(){
        return false;
    }
    virtual pair<string, string> getStrExpectedandResult() {
        return make_pair("", "");
    }
};

#endif