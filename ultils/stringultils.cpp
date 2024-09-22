#include <bits/stdc++.h>

using namespace std;

vector<char> split_string_to_vector(string s, char c){
    vector<char> str;

    for (auto i : s){
        if (i == c) continue;

        str.push_back(i);
    }

    return str;
}

string split_string(string s, char c){
    string str = "";

    for (auto i : s){
        if (i == c) continue;

        str += i;
    }

    return str;
}