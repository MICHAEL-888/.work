//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int df = 0, nf = 0, xf = 0, bf = 0, zz = 0, ff = 0, bb = 0;
    vector<int> w(10);
    vector<int> t(10);
    vector<int> b(10);
    for (int i = 0; i < 14; i++) {
        string temp;
        cin >> temp;
        if (temp == "df") {
            df++;
        } else if (temp == "nf") {
            nf++;
        } else if (temp == "xf") {
            xf++;
        } else if (temp == "bf") {
            bf++;
        } else if (temp == "zz") {
            zz++;
        } else if (temp == "ff") {
            ff++;
        } else if (temp == "bb") {
            bb++;
        } else if (temp[1] == 'w') {
            w[temp[0] - 48]++;
        } else if (temp[1] == 't') {
            t[temp[0] - 48]++;
        } else if (temp[1] == 'b') {
            b[temp[0] - 48]++;
        }
    }

    if (df == 3 && nf == 3 && xf == 3 && bf == 3) {
        if (zz == 2 || ff == 2 || bb == 2) {
            cout << 88 << endl;
            return;
        }
        for (int i = 1; i < 10; i++) {
            if (w[i] == 2 || t[i] == 2 || b[i] == 2) {
                cout << 88 << endl;
                return;
            }
        }
    } else if (df + nf + xf + bf == 11) {
        if (zz == 3 || ff == 3 || bb == 3) {
            cout << 66 << endl;
            return;
        }
        for (int i = 1; i < 8; i++) {
            if (w[i] == 1 && w[i + 1] == 1 && w[i + 2] == 1) {
                cout << 66 << endl;
                return;
            } else if (t[i] == 1 && t[i + 1] == 1 && t[i + 2] == 1) {
                cout << 66 << endl;
                return;
            } else if (b[i] == 1 && b[i + 1] == 1 && b[i + 2] == 1) {
                cout << 66 << endl;
                return;
            }
        }

        for (int i = 1; i < 10; i++) {
            if (w[i] == 3 || t[i] == 3 || b[i] == 3) {
                cout << 66 << endl;
                return;
            }
        }
    }


    cout << 0 << endl;

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