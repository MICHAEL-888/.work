//
// Created by Michael on 2024/2/29.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        ans += 1;
        int temp = 1;
        for (int j = 1; j <= i - 1; j++) {
            temp *= j;
        }
        temp *= (i - 1);
        ans += temp;
    }
    cout << ans << endl;
    return 0;
}
