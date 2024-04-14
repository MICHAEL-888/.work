//
// Created by Michael on 24-4-18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < n; i++) {
        /*int lx, temp = 0;
        if (q[i].find('_') != q[i].npos) {
            lx = 3;
        } else {
            for (int j = 0; j < q[i].length(); j++) {
                if (isupper(q[i][j]) == 1) {
                    temp++;
                }
            }
            if (temp == 1) {
                lx = 1;
            } else {
                lx = 2;
            }
        }*/
        if (s == "Camel") {
            q[i][0] = tolower(q[i][0]);
            for (int j = 0; j < q[i].length(); j++) {
                if (q[i][j] == '_') {
                    q[i][j + 1] = toupper(q[i][j + 1]);
                    q[i].erase(j, 1);
                }
            }
        } else if (s == "Pascal") {
            q[i][0] = toupper(q[i][0]);
            for (int j = 0; j < q[i].length(); j++) {
                if (q[i][j] == '_') {
                    q[i][j + 1] = toupper(q[i][j + 1]);
                    q[i].erase(j, 1);
                }
            }
        } else {
            for (int j = 0; j < q[i].length(); j++) {
                if (isupper(q[i][j]) > 0 && j != 0) {
                    q[i].insert(j, "_", 1);
                    break;
                }
            }
            for (int j = 0; j < q[i].length(); j++) {
                q[i][j] = tolower(q[i][j]);
            }
        }
        cout << q[i] << endl;
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