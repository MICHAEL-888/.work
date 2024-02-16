//
// Created by Michael on 2024/2/11.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a % 2 == 1 && b % 2 == 1) {
        cout << "NO" << endl;
    } else if (a % 2 == 1 && b % 2 != 1 && (float)b / (float)a == 2) {
        cout << "NO" << endl;
    } else if (a % 2 != 1 && b % 2 == 1 && (float)a / (float)b == 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}