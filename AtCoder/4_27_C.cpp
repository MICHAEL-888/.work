//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> q(n);
    for (ll i = 0; i < n; i++) {
        cin >> q[i];
    }
    ll temp = q.size();
    for (ll j = 0; j < n * n; j++) {
        for (ll i = 0; i < q.size() - 1; i++) {
            if (q[i] == q[i + 1]) {
                q[i]++;
                q.erase(q.begin() + i + 1);
            }
        }
        if (temp == q.size()) {
            break;
        }
        temp = q.size();
    }

    cout << q.size();
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