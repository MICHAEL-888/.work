//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n;
    char a;
    cin >> n >> a;
    for (int j = 0; j < (int) (n / 2.0 + 0.5); j++) {
        for (int i = 0; i < n; i++) {
            cout << a;
        }
        cout << endl;
    }
}