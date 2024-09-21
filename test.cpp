#include "test.h"

void resultAnnouncement(bool isPassed, int caseIndex){
    if (isPassed){
        cout << GREEN << "Case " << caseIndex << " Passed " << "\u2713" << RESET << endl;
    }
    else cout << RED << "Case " << caseIndex << " Failed "  << "\u2717" << RESET << endl;
}

void Test::testing(){
    resultAnnouncement(case1(), 1);
    resultAnnouncement(case2(), 2);
    resultAnnouncement(case3(), 3);
}

/// @brief 
/// @tparam T1 return type
/// @tparam T2 parameter 1 type
/// @tparam T3 parameter 2 type
/// @tparam T4 parameter 3 type
template <typename T1, typename T2, typename T3, typename T4>
bool runTestCase(T1 expected, T2 para1, T3 para2 = 0, T4 para3 = 0){
    TestCase<T1, T2, T3, T4> testCase(expected);
    testCase.run(para1, para2, para3);

    return testCase.isPassed();
}

bool Test::case1(){
    //example of using a testcase
    vector<int> para = {1,2,2,3,4,5,1,1,1,1};
    int expected = 7;
   
    return runTestCase<int, vector<int>, NONE, NONE>(expected, para);
}

bool Test::case2(){
    vector<int> para = {1,2,3,4};
    int expected = 2;
   
    return runTestCase<int, vector<int>, NONE, NONE>(expected, para);
}

bool Test::case3(){
    vector<int> para = {1,1,1,1};
    int expected = 0;
   
    return runTestCase<int, vector<int>, NONE, NONE>(expected, para);
}

int main(int argc, char const *argv[])
{
    Test test;
    test.testing();
    return 0;
}
