//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int a = 0, b = 0;
    for (int i = 0; i < 9; i++) {
        int temp;
        cin >> temp;
        a += temp;
    }
    for (int i = 0; i < 8; i++) {
        int temp;
        cin >> temp;
        b += temp;
    }
    cout << a - b + 1;
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