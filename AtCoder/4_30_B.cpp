//
// Created by Michael on 24-4-30.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> q(h + 1);
    cin.ignore();
    for (int i = 1; i < h + 1; i++) {
        getline(cin, q[i]);
        q[i].insert(0, "*");
    }

    for (int i = 1; i < h + 1; i++) {
        int kk = q[i].find("snuke");
        if (kk != q[i].npos) {
            cout << i << " " << kk << endl;
            cout << i << " " << kk + 1 << endl;
            cout << i << " " << kk + 2 << endl;
            cout << i << " " << kk + 3 << endl;
            cout << i << " " << kk + 4 << endl;
        }
        kk = q[i].find("ekuns");
        if (kk != q[i].npos) {
            cout << i << " " << kk + 4 << endl;
            cout << i << " " << kk + 3 << endl;
            cout << i << " " << kk + 2 << endl;
            cout << i << " " << kk + 1 << endl;
            cout << i << " " << kk << endl;
        }
    }

    for (int i = 1; i < h + 1; i++) {
        for (int j = 1; j < w + 1; j++) {

            if (q[i][j] == 's' && i >= 5) {  //第五行以后可向上找
                if (q[i - 1][j] == 'n') {
                    if (q[i - 2][j] == 'u') {
                        if (q[i - 3][j] == 'k') {
                            if (q[i - 4][j] == 'e') {
                                cout << i << " " << j << endl;
                                cout << i - 1 << " " << j << endl;
                                cout << i - 2 << " " << j << endl;
                                cout << i - 3 << " " << j << endl;
                                cout << i - 4 << " " << j << endl;
                            }
                        }
                    }
                }
            }

            if (q[i][j] == 's' && h - i >= 4) {   //剩余行数大于5可往下找
                if (q[i + 1][j] == 'n') {
                    if (q[i + 2][j] == 'u') {
                        if (q[i + 3][j] == 'k') {
                            if (q[i + 4][j] == 'e') {
                                cout << i << " " << j << endl;
                                cout << i + 1 << " " << j << endl;
                                cout << i + 2 << " " << j << endl;
                                cout << i + 3 << " " << j << endl;
                                cout << i + 4 << " " << j << endl;

                            }
                        }
                    }
                }
            }

            if (q[i][j] == 's' && i >= 5 && j >= 5) {   //往左上找
                if (q[i - 1][j - 1] == 'n') {
                    if (q[i - 2][j - 2] == 'u') {
                        if (q[i - 3][j - 3] == 'k') {
                            if (q[i - 4][j - 4] == 'e') {
                                cout << i << " " << j << endl;
                                cout << i - 1 << " " << j - 1 << endl;
                                cout << i - 2 << " " << j - 2 << endl;
                                cout << i - 3 << " " << j - 3 << endl;
                                cout << i - 4 << " " << j - 4 << endl;
                            }
                        }
                    }
                }
            }

            if (q[i][j] == 's' && i >= 5 && w - j >= 4) {   //往右上找
                if (q[i - 1][j + 1] == 'n') {
                    if (q[i - 2][j + 2] == 'u') {
                        if (q[i - 3][j + 3] == 'k') {
                            if (q[i - 4][j + 4] == 'e') {
                                cout << i << " " << j << endl;
                                cout << i - 1 << " " << j + 1 << endl;
                                cout << i - 2 << " " << j + 2 << endl;
                                cout << i - 3 << " " << j + 3 << endl;
                                cout << i - 4 << " " << j + 4 << endl;
                            }
                        }
                    }
                }
            }

            if (q[i][j] == 's' && h - i >= 4 && j >= 5) {   //往左下找
                if (q[i + 1][j - 1] == 'n') {
                    if (q[i + 2][j - 2] == 'u') {
                        if (q[i + 3][j - 3] == 'k') {
                            if (q[i + 4][j - 4] == 'e') {
                                cout << i << " " << j << endl;
                                cout << i + 1 << " " << j - 1 << endl;
                                cout << i + 2 << " " << j - 2 << endl;
                                cout << i + 3 << " " << j - 3 << endl;
                                cout << i + 4 << " " << j - 4 << endl;
                            }
                        }
                    }
                }
            }

            if (q[i][j] == 's' && h - i >= 4 && w - j >= 4) {   //往右下找
                if (q[i + 1][j + 1] == 'n') {
                    if (q[i + 2][j + 2] == 'u') {
                        if (q[i + 3][j + 3] == 'k') {
                            if (q[i + 4][j + 4] == 'e') {
                                cout << i << " " << j << endl;
                                cout << i + 1 << " " << j + 1 << endl;
                                cout << i + 2 << " " << j + 2 << endl;
                                cout << i + 3 << " " << j + 3 << endl;
                                cout << i + 4 << " " << j + 4 << endl;
                            }
                        }
                    }
                }
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