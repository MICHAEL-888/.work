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
    string s;
    cin >> s;
    if (n != 5) {
        cout << "NO" << endl;
        return;
    }
    if (count(s.begin(), s.end(), 'T') == 1 && count(s.begin(), s.end(), 'i') == 1 &&
        count(s.begin(), s.end(), 'm') == 1 && count(s.begin(), s.end(), 'u') == 1 &&
        count(s.begin(), s.end(), 'r') == 1) {
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