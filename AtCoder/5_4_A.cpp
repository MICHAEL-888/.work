//
// Created by Michael on 24-5-4.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if (x >= z && z >= y) {
        cout << "Yes";
    } else if (x <= z && z <= y) {
        cout << "Yes";
    } else {
        cout << "No";
    }
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