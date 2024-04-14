//
// Created by Michael on 24-5-4.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 0; i < s1.length(); i++) {
        ans = s2.find(s1[i], ans) + 1;
        if (ans != s2.npos) {
            cout << ans << " ";
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