//
// Created by Michael on 24-4-28.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, h;
    cin >> n >> h;
    vector<string> q(5);
    cin.ignore();
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        getline(cin, q[i]);
    }
    for (int i = 0; i < n; i++) {
        if (q[1][i] == '*' && h > 0) {
            ans++;
            h--;
            if (q[0][i] == '*' && h > 0) {
                ans++;
                h--;
                q[0][i] = '#';
            }
        }

        if (q[3][i] == '*' && h > 0) {
            ans++;
            h--;
            if (q[4][i] == '*' && h > 0) {
                ans++;
                h--;
                q[4][i] = '#';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (q[0][i] == '*' && q[1][i] == '#' && h > 1) {
            ans++;
            h -= 2;
        }

        if (q[4][i] == '*' && q[3][i] == '#' && h > 1) {
            ans++;
            h -= 2;
        }

    }
    cout << ans;
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