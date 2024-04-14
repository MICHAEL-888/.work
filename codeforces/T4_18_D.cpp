//
// Created by Michael on 24-4-18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    string s;
    string ans = "314159265358979";
    int n = 0;
    getline(cin, s);
    /*while (cin >> s) {
        if (s == "") {
            break;
        }
        cout << s;
        n++;
    }*/
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            n++;
        }
    }
    n++;
    //cout << n;
    for (int i = 0; i < n; i++) {
        cout << ans[i];
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