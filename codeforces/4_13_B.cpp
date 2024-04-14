//
// Created by Michael on 2024/4/13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int t, ans = 0;
    cin >> t;
    vector<int> q(t + 1);
    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        q[temp]++;
    }
    for (int i = 0; i < t + 1; i++) {
        if (q[i] > 1) {
            ans += (q[i] - 1);
        }
    }
    cout << ans << endl;
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