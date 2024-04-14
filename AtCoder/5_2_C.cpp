//
// Created by Michael on 24-5-2.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> q(h + 2);
    cin.ignore();
    for (int i = 0; i < w + 2; i++) {
        q[0].push_back('.');
    }
    for (int i = 1; i < h + 1; i++) {
        getline(cin, q[i]);
        q[i].insert(0, ".");
        q[i].push_back('.');
    }
    for (int i = 0; i < w + 2; i++) {
        q[h + 1].push_back('.');
    }
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            int lev = 0;
            for (int k = -1; k < 2; k++) {
                for (int l = -1; l < 2; l++) {
                    if (q[i + k][j + l] == '#') {
                        if (k == 0 && l == 0) {
                            lev--;
                        }
                        lev++;
                    }
                }
            }
            if (lev == 3 && q[i - 1][j - 1] == '#' && q[i - 1][j] == '#' && q[i - 1][j + 1] == '#') {
                continue;
            } else if (lev == 3 && q[i + 1][j - 1] == '#' && q[i + 1][j] == '#' && q[i + 1][j + 1] == '#') {
                continue;
            } else if (lev == 3 && q[i - 1][j - 1] == '#' && q[i][j - 1] == '#' && q[i + 1][j - 1] == '#') {
                continue;
            } else if (lev == 3 && q[i - 1][j + 1] == '#' && q[i][j + 1] == '#' && q[i + 1][j + 1] == '#') {
                continue;
            }
            if (lev >= 3 && q[i][j] == '.') {
                cout << i << " " << j;
                return;
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