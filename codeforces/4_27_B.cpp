//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    if (q[n - 1][0] == 'B' || q[n - 1][m - 1] == 'B') { //左下角 或右下角 有B
        for (int i = 0; i < n; i++) {
            if (q[i][0] == 'B') {   //中间行第一个有B
                for (int j = 0; j < n; j++) {
                    if (q[j][m - 1] == 'B') { //中间行最右边有一个B
                        for (int k = 0; k < m; k++) {
                            if (q[0][k] == 'B') {   //第一行有B
                                cout << "YES" << endl;
                                return;
                            }
                        }
                    }
                }

            }
        }
    }
    if (q[0][0] == 'B' || q[0][m - 1] == 'B') { //左上角 或右上角 有B
        for (int i = 0; i < n; i++) {
            if (q[i][0] == 'B') {   //中间行第一个有B
                for (int j = 0; j < n; j++) {
                    if (q[j][m - 1] == 'B') { //中间行最右边有一个B
                        for (int k = 0; k < m; k++) {
                            if (q[n - 1][k] == 'B') {   //最后一行有B
                                cout << "YES" << endl;
                                return;
                            }
                        }
                    }
                }

            }
        }
    }

    if (q[n - 1][0] == 'W' || q[n - 1][m - 1] == 'W') { //左下角 或右下角 有W
        for (int i = 0; i < n; i++) {
            if (q[i][0] == 'W') {   //中间行第一个有W
                for (int j = 0; j < n; j++) {
                    if (q[j][m - 1] == 'W') { //中间行最右边有一个W
                        for (int k = 0; k < m; k++) {
                            if (q[0][k] == 'W') {   //第一行有W
                                cout << "YES" << endl;
                                return;
                            }
                        }
                    }
                }

            }
        }
    }
    if (q[0][0] == 'W' || q[0][m - 1] == 'W') { //左上角 或右上角 有W
        for (int i = 0; i < n; i++) {
            if (q[i][0] == 'W') {   //中间行第一个有W
                for (int j = 0; j < n; j++) {
                    if (q[j][m - 1] == 'W') { //中间行最右边有一个W
                        for (int k = 0; k < m; k++) {
                            if (q[n - 1][k] == 'W') {   //最后一行有W
                                cout << "YES" << endl;
                                return;
                            }
                        }
                    }
                }

            }
        }
    }

    cout << "NO" << endl;


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