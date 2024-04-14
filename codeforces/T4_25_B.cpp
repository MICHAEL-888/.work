//
// Created by Michael on 24-4-25.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    if (x > k || y > k) {
        cout << -1 << endl;
        return;
    }
    if ((max(x, y) - min(x, y)) % 2 == 1) {
        cout << k - 1 << endl;
    } else if ((k - max(x, y)) % 2 == 1) {
        cout << k - 2 << endl;
    } else {
        cout << k << endl;
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