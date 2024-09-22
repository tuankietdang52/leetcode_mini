#include "test.h"

#pragma region testing stuff

void resultAnnouncement(bool isPassed, int caseIndex){
    if (isPassed){
        cout << GREEN << "Case " << caseIndex << ": Passed " << "\u2713" << RESET << endl;
    }
    else cout << RED << "Case " << caseIndex << ": Failed "  << "\u2717" << RESET << endl;

    cout << "===========================================\n";
}

void Test::testing(){
    resultAnnouncement(case1(), 1);
    resultAnnouncement(case2(), 2);
    resultAnnouncement(case3(), 3);
}

template <typename T1, typename T2, typename T3, typename T4>
void printExpectedAndResult(ICase<T1, T2, T3, T4>& testCase){
    pair<string, string> ans = testCase.getStrExpectedandResult();

    cout << ans.first << endl;
    cout << ans.second << endl;

    double excuteTime = testCase.getExcuteTime();
    cout << PURPLE << "Excute Time: " << fixed << excuteTime << "s" << RESET << endl;
}

/// @brief 
/// @tparam T1 return type
/// @tparam T2 parameter 1 type
/// @tparam T3 parameter 2 type
/// @tparam T4 parameter 3 type
template <typename T1, typename T2, typename T3, typename T4>
bool Test::runTestCase(T1 expected, T2 para1, T3 para2, T4 para3){
    TestCase<T1, T2, T3, T4> testCase(expected);
    testCase.run(para1, para2, para3);

    printExpectedAndResult(testCase);
    return testCase.isPassed();
}

/// @tparam T1 vector element type
/// @tparam T2 parameter 1 type
/// @tparam T3 parameter 2 type
/// @tparam T4 parameter 3 type
template <typename T1, typename T2, typename T3, typename T4>
bool Test::runTestCaseVector(vector<T1> expected, T2 para1, T3 para2, T4 para3){
    TestCaseVector<T1, T2, T3, T4> testCase(expected);
    testCase.run(para1, para2, para3);

    printExpectedAndResult<T1, T2, T3, T4>(testCase);
    return testCase.isPassed();
}

#pragma endregion

bool Test::case1(){
    //example of using a testcase
    string s = "1*2+3*4";
    int expected = 14;
   
    return runTestCase<int, string, NONE, NONE>(expected, s);
}

bool Test::case2(){
    string s = " 3/2 ";
    int expected = 1;
   
    return runTestCase<int, string, NONE, NONE>(expected, s);
}

bool Test::case3(){
    string s = " 3+5 / 2 ";
    int expected = 5;
   
    return runTestCase<int, string, NONE, NONE>(expected, s);
}

int main(int argc, char const *argv[])
{
    Test test;
    test.testing();

    return 0;
}
