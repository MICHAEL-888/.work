//
// Created by Michael on 2024/2/19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    long long num;
    for (long long i = 0;; i++) {
        num = 999063388 * i;
        if (10650 > num && 10650 - num < 10650) {
            cout << i << endl;
            cout << 999063388 * i << endl;
            cout << 10650 - 999063388 * i;
            return 0;
        }
    }
}