#include "testcasevector.h"

template <typename T1, typename T2, typename T3, typename T4>
TestCaseVector<T1, T2, T3, T4>::TestCaseVector(vector<T1> expected){
    this->expected = expected;
}

template <typename T1, typename T2, typename T3, typename T4>
void TestCaseVector<T1, T2, T3, T4>::run(T2 para1, T3 para2, T4 para3)
{
    result = code.solve(para1, para2, para3);
}

template <typename T1, typename T2, typename T3, typename T4>
bool TestCaseVector<T1, T2, T3, T4>::isPassed(){
    return result == expected;
}

template <typename T>
string getArrayString(vector<T> array, string type){
    int n = array.size();
    string str = type + ": [";

    for (int i = 0; i < n; i++){
        str += to_string(array[i]);

        if (i != n - 1) str += ", ";
        else str += "]";
    }

    return str;
}

template <typename T1, typename T2, typename T3, typename T4>
pair<string, string> TestCaseVector<T1, T2, T3, T4>::getStrExpectedandResult(){
    return make_pair(getArrayString<T1>(expected, "Expected"), getArrayString<T1>(result, "Result"));
}