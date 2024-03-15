//
// Created by Michael on 2024/3/11.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, m, k, count = 0;
    cin >> n >> m >> k;
    vector<int> q1(n);
    vector<int> q2(m);
    for (int i = 0; i < n; i++) {
        cin >> q1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> q2[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (q1[i] + q2[j] <= k) {
                count++;
            }
        }
    }
    cout << count << endl;
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