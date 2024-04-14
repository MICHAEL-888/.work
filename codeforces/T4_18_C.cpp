//
// Created by Michael on 24-4-18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    double r1, r2;
    cin >> r1 >> r2;
    //cout << 3.141592 * (r2 * r2 - r1 * r1);
    printf("%.6f", 3.141592 * (r2 * r2 - r1 * r1));
}


signed main(void) {
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}