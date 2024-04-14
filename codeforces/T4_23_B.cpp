//
// Created by Michael on 24-4-23.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    vector<vector<char>> q(8);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char temp;
            cin >> temp;
            q[i].push_back(temp);
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (q[i][j] == '*') {
                cout << (char) (j + 97) << 8 - i;
            }
        }
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