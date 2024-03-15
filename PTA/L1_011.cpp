//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == b[i]) {
                a[j] = 127;
            }
        }
    }
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != 127) {
            cout << a[i];
        }
    }
}