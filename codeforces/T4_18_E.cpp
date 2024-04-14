//
// Created by Michael on 24-4-18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> q(n + 1);
    vector<int> q2;
    for (int i = 1; i < n + 1; i++) {
        cin >> q[i];
    }
    q2 = q;
    sort(q2.begin(), q2.end());
    int x, y;
    cin >> x >> y;
    int c = (int) ((double) (q[x] + q[y]) / 2.0 + 0.5);
    int ans;
    for (int i = 1; i < n + 1; i++) {
        if (i != n) {
            if (c >= q2[i] && c <= q2[i + 1]) {
                if (abs(c - q2[i]) <= abs(c - q2[i + 1])) {
                    ans = q2[i];
                    break;
                } else if (abs(c - q2[i]) > abs(c - q2[i + 1])) {
                    ans = q2[i + 1];
                    break;
                }
            }
        } else {
            ans = q2[n];
            break;
        }
    }

    for (int j = 1; j < n + 1; j++) {
        if (q[j] == ans) {
            cout << j;
            return;
        }
    }


}


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}