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
    for (int i = 1; i <= n * 9; i += 2) {
        cout << i << " ";
        if (i % 9 == 0) {
            i++;
            if (i != n * 9 + 1) {
                cout << i << " ";
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