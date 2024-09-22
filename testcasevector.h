#ifndef TESTCASEVEC_H
#define TESTCASEVEC_H

#include "icase.cpp"

#define RED "\033[31m" 

/// @brief 
/// @tparam T1 element in vector type
/// @tparam T2 parameter 1 type
/// @tparam T3 parameter 2 type
/// @tparam T4 parameter 3 type
template <typename T1, typename T2, typename T3, typename T4> 
class TestCaseVector : public ICase<T1, T2, T3, T4>{
public:
    vector<T1> expected;
    vector<T1> result;

    Code<vector<T1>, T2, T3, T4> code;

    TestCaseVector(vector<T1> expected);

    void run(T2 para1, T3 para2, T4 para3) override;
    bool isPassed() override;
    pair<string, string> getStrExpectedandResult() override;
};

#endif