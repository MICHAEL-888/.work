//
// Created by Michael on 2024/4/9.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int n, x;
    string ans;
    cin >> n >> x;
    while (n != 0) {
        int temp = n % x;
        if (temp >= 10) ans.push_back(temp + 55);
        else ans.push_back(temp + 48);
        n /= x;
    }
    for (auto i = ans.rbegin(); i != ans.rend(); i++) {
        cout << *i;
    }
}

