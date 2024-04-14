//
// Created by Michael on 24-4-30.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> q(n + 1);
    for (int i = 1; i < n + 1; i++) {
        cin >> q[i];
    }
    for (int i = 1; i < n + 1; i++) {
        if (q[q[i]] == i) {
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;

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