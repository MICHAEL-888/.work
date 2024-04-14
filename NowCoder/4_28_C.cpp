//
// Created by Michael on 24-4-28.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<double> q(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = 1;
        int cs = 0;
        while (q[i] >= x) {
            if (q[i] == x) {
                if (cs > count && num > ans) {
                    ans = num;
                    count = cs;
                } else if (cs == count) {
                    ans += num;
                }
            }
            num *= 2;
            cs++;
            q[i] = ceil(q[i] / 3);
        }
    }
    cout << ans;
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