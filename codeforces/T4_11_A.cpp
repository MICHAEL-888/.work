//
// Created by Michael on 2024/4/11.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ull = unsigned long long;

int main() {
    ull n;
    cin >> n;
    ull ans;
    ans = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    cout << ans;

}