//
// Created by Michael on 2024/3/25.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int n;
    char charc;
    string s;
    cin >> n >> charc;
    cin.ignore();
    getline(cin, s);
    if (n > s.length()) {
        int kk = 0;
        kk = n - s.length();
        for (int i = 0; i < kk; i++) {
            cout << charc;
        }
        cout << s;
    } else if (n == s.length()) {
        cout << s;
    } else {
        cout << s.substr(s.length() - n, n);
    }
}