//
// Created by Michael on 2024/4/6.
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
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        q[i] = s[i] - 48;
    }
    if (n == 1) {
        if (q[0] == 1) {
            cout << "NO" << endl;
            return;
        } else {
            cout << "YES" << endl;
            return;
        }
    }
    if (n == 2) {
        for (int i = 0; i < n; i++) {
            if (q[i] == 1 && q[i + 1] == 1) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    int num0 = 0, num1 = 0;
    for (int i = 0; i < n; i++) {
        if (q[i] == 0) {
            num0++;
        } else {
            num1++;
        }
    }
    if (num1 == 2) {
        for (int i = 0; i < n; i++) {
            if (q[i] == 1 && q[i + 1] == 1) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if (num1 % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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