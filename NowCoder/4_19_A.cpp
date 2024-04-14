//
// Created by Michael on 24-4-19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    char c[6][7];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> c[i][j];
        }
    }
    if (c[0][3] == '|' && c[5][3] == '.') {
        cout << "m";
    } else if (c[5][3] == '|') {
        cout << "p";
    } else {
        cout << "o";
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