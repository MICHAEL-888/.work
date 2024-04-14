//
// Created by Michael on 24-5-1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    ans = count(s.begin(), s.end(), 'U');
    for (int i = 0; i < n; i++) {
        if (s.find("DDD", i) != s.npos || s.find("DUD", i) != s.npos) {
            ans++;
        } else if (s.find("UDU", i) != s.npos || s.find("UUU", i) != s.npos) {
            ans--;
        }
    }

    if (s[n] == s[1] && s[n] == 'D') {
        ans++;
    } else {
        ans--;
    }

    if (s[n - 1] == s[0] && s[n - 1] == 'D') {
        ans++;
    } else {
        ans--;
    }

    if (ans % 2) {
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