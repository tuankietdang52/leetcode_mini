#include "testcase.h"

template <typename T1, typename T2, typename T3, typename T4>
TestCase<T1, T2, T3, T4>::TestCase(T1 expected){
    this->expected = expected;
}

template <typename T1, typename T2, typename T3, typename T4>
void TestCase<T1, T2, T3, T4>::run(T2 para1, T3 para2, T4 para3)
{
    result = code.solve(para1, para2, para3);
}

template <typename T1, typename T2, typename T3, typename T4>
bool TestCase<T1, T2, T3, T4>::isPassed(){
    return result == expected;
}

template <typename T>
string getAnsString(T value, string type){
    return type + ": " + to_string(value);
}

template <typename T1, typename T2, typename T3, typename T4>
pair<string, string> TestCase<T1, T2, T3, T4>::getStrExpectedandResult(){
    return make_pair(getAnsString(expected, "Expected"), getAnsString(result, "Result"));
}