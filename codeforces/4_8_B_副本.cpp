//
// Created by Michael on 2024/4/8.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> q(n * n);
    for (int i = 0; i < n * n; i++) {
        cin >> q[i];
    }
    sort(q.begin(), q.end());
    for (int i = 0; i < (n * n - 1) / 2; i++) {
        if (q[i] + q[n * n - 1 - i] != q[(n * n - 1) / 2] * 2) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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