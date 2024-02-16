//
// Created by Michael on 2024/1/30.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    if (m % 2 == 0) {
        cout << m / 2 * n << endl;
    } else {
        cout << (m - 1) / 2 * n << endl;
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