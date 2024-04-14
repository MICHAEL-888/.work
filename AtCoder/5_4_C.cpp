//
// Created by Michael on 24-5-4.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll mx = 0, ans = 0;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        if (b - a > mx) {
            mx = b - a;
        }
        ans += a;
    }
    cout << ans + mx;
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