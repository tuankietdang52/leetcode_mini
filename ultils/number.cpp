#include <bits/stdc++.h>

using namespace std;

bool isDigit(char c){
    return isdigit(c) || c == '-';
}

bool isNumber(string s){
    return !s.empty() &&
            find_if(s.begin(), s.end(), [] (char c)  { return !isDigit(c); }) == s.end();
}