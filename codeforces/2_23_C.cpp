//
// Created by Michael on 2024/2/23.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> c(n + 1);
    for(int i = 1; i <= n; ++i) cin >> c[i];
    vector<int> pos(n + 1, -1);
    vector<int> dp(n + 1);
    dp[0] = 0;
    for(int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1];
        if(pos[c[i]] != -1) dp[i] = max(dp[i], pos[c[i]]);
        pos[c[i]] = i;
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << (dp[r] < l ? "YES" : "NO") << "\n";
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