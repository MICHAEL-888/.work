//
// Created by Michael on 24-5-2.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int p, q;
    char pp, qq;
    cin >> pp >> qq;
    p = pp - 'A';
    q = qq - 'A';
    int a[] = {3, 1, 4, 1, 5, 9};
    int ans = 0;
    for (int i = min(p, q); i < max(p, q); i++) {
        ans += a[i];
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