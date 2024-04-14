//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int D;
    cin >> D;
    D += 2;
    if (D > 7) {
        D -= 7;
    }
    cout << D;
}