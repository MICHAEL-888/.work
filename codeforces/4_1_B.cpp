//
// Created by Michael on 2024/4/1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    if (s.find("it") != s.npos) {
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