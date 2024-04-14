//
// Created by Michael on 2024/3/16.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == '<' && s[s.length() - 1] == '>') {
        for (int i = 1; i < s.length() - 1; i++) {
            if (s[i] != '=') {
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}