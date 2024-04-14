//
// Created by Michael on 24-5-1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, index;
    cin >> n;
    vector<int> q(n);
    vector<int> q2(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> q2[i];
    }
    vector<int> q3;
    q3 = q2;
    int ans = 0;
    while (1) {
        for (int i = 0; i < n; i++) {
            if (q[i] > q2[i]) {
                index = lower_bound(q.begin(), q.end(), q3[0]) - q.begin();
                if (index < n && q[index] >= q3[0]) {
                    q.insert(q.begin() + index, q3[0]);
                    q.pop_back();
                    q3.erase(q3.begin());
                    ans++;
                    //cout << index << endl;
                }
            } else if (i == n - 1) {
                cout << ans << endl;
                return;
            }
        }
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