//
// Created by Michael on 2024/2/29.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int a1, a2, n, d;
    cin >> a1 >> a2 >> n;
    d = a2 - a1;
    cout << (a1 + a1 + (n - 1) * d) * n / 2 << endl;
    return 0;
}
