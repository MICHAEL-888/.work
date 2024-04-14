//
// Created by Michael on 24-4-23.
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
    int num = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'M' && s[i + 1] != 'F') {
            cout << "No";
            return;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'F' && s[i + 1] != 'M') {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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