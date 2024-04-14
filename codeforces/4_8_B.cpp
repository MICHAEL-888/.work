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
    int sq[n][n];
    sort(q.begin(), q.end());
    for (int i = 0; i < (n * n - 1) / 2; i++) {
        if (q[i] + q[n * n - 1 - i] != q[(n * n - 1) / 2] * 2) {
            cout << "NO" << endl;
            return;
        }
    }
    sq[0][0] = q[0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            if (j == 0) {
                sq[i][j] = sq[i - 1][j] + c;
            } else {
                sq[i][j] = sq[i][j - 1] + d;
            }
        }
    }
    vector<int> sqq;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sqq.push_back(sq[i][j]);
        }
    }
    sort(sqq.begin(), sqq.end());
    for (int i = 0; i < n * n; i++) {
        int index = lower_bound(sqq.begin(), sqq.end(), q[i]) - sqq.begin();
        if (index >= n * n && sqq[index] != q[i]) {
            cout << "NO" << endl; //查找元素不存在
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