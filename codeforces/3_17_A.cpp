//
// Created by Michael on 2024/3/17.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (k < n - 1) {
        cout << n << endl;
    } else {
        cout << 1 << endl;
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