//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<string> q1(n);
    for (int i = 0; i < n; i++) {
        cin >> q1[i];
    }
    vector<string> q2(n);
    for (int i = 0; i < n; i++) {
        cin >> q2[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (q1[i][j] != q2[i][j]) {
                cout << i + 1 << " " << j + 1;
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