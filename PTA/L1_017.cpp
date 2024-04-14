//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string s;
    cin >> s;
    float count = 0, bb = 0, ff = 1, flag = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '2')
            count++;
    }
    if (s[s.length() - 1] % 2 == 0) {
        flag = 2;
    }
    if (s[0] == '-') {
        ff = 1.5;
        bb = s.length() - 1;
    } else
        bb = s.length();
    // cout << count / bb * ff * flag * 100 << "%";
    printf("%.2f%%", count / bb * ff * flag * 100);
    return 0;
}