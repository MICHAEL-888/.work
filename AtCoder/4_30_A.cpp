//
// Created by Michael on 24-4-30.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    unsigned long long a, b;
    cin >> a >> b;
    if (a % b == 0) {
        cout << a / b;
    } else {
        cout << a / b + 1;
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