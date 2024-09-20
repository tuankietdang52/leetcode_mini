#include "test.h"

void Test::testing(){
    if (case1()){
        cout << GREEN << "Case 1 Passed " << "\u2713" << RESET << endl;
    }
    else cout << RED << "Case 1 Failed " << "\u2717" << RESET << endl;

    if (case2()){
        cout << GREEN << "Case 2 Passed " << "\u2713" << RESET << endl;
    }
    else cout << RED << "Case 2 Failed " << "\u2717" << RESET << endl;

    if (case3()){
        cout << GREEN << "Case 3 Passed " << "\u2713" << RESET << endl;
    }
    else cout << RED << "Case 3 Failed " << "\u2717" << RESET << endl;
}

bool Test::case1(){
    //example of using a testcase
    vector<int> para = {1,2,2,3,4,5,1,1,1,1};
    int expected = 7;
   
    TestCase<int, vector<int>, NONE, NONE> testCase(expected);
    testCase.run(para);

    return testCase.isPassed();
}

bool Test::case2(){
    vector<int> para = {1,2,3,4};
    int expected = 2;
   
    TestCase<int, vector<int>, decltype(nullptr), decltype(nullptr)> testCase(expected);
    testCase.run(para);

    return testCase.isPassed();
}

bool Test::case3(){
    vector<int> para = {1,1,1,1};
    int expected = 0;
   
    TestCase<int, vector<int>, decltype(nullptr), decltype(nullptr)> testCase(expected);
    testCase.run(para);

    return testCase.isPassed();
}

int main(int argc, char const *argv[])
{
    Test test;
    test.testing();
    return 0;
}
