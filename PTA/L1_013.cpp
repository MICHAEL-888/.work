//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 1, ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum *= j;
        }
        ans += sum;
        sum = 1;
    }
    cout << ans;
}