//
// Created by Michael on 2024/2/15.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, k, djmax, gzmax;
    cin >> n >> k;
    djmax = 4 * n - 2;
    gzmax = 2 * n;
    if (k % 2 == 1 && k != djmax) {
        cout << (k + 1) / 2 << endl;
    } else if (k % 2 == 0 && k != djmax) {
        cout << k / 2 << endl;
    } else {
        cout << k / 2 + 1 << endl;
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