//
// Created by Michael on 2024/3/16.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    long long x;
    cin >> x;
    if (x == 0) {
        cout << 1;
    } else if (x > 0) {
        cout << (long long) ((long double) x / (long double) 10.0 + 0.5);
    } else {
        cout << (long long) ((long double) x / (long double) 10.0);
    }
    return 0;
}
