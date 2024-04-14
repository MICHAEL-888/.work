//
// Created by Michael on 24-5-4.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n), pos(n+1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    priority_queue<int> pq;
    int ans = n;
    for (int i = 1; i <= n; i++) {
        pq.push(-pos[i]);
        while (pq.size() > k) {
            pq.pop();
        }
        if (pq.size() == k && i >= k) {
            ans = min(ans, pq.top() - pos[i-k+1] + 1);
        }
    }

    cout << ans << '\n';
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