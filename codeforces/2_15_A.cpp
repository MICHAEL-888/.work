//
// Created by Michael on 2024/2/15.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    sort(q.begin(), q.end());
    for (int i = 0; i < n - 1; i++) {
        ans += q[i + 1] - q[i];
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