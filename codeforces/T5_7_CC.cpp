//
// Created by Michael on 24-5-7.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    replace(s1.begin(), s1.end(), 'G', 'B');
    replace(s2.begin(), s2.end(), 'G', 'B');
    if (s1 == s2) {
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