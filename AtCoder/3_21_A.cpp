//
// Created by Michael on 2024/3/21.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a >= b) {
        cout << "Bat";
    } else {
        cout << "Glove";
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