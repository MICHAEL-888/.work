//
// Created by Michael on 24-5-1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, a, k;
    cin >> n >> a >> k;
    for (int i = 0; i < k; i++) {
        if (i == 0) {
            string s;
            s = to_string(a + 1);
            a += 1;
            if (s.find('7') == s.npos && (a) % 7 != 0) {
                cout << a << " ";
            } else {
                cout << "p" << " ";
            }
        } else {
            string s;
            s = to_string(a + n);
            a += n;
            if (s.find('7') == s.npos && (a) % 7 != 0) {
                cout << a << " ";
            } else {
                cout << "p" << " ";
            }
        }

    }
    cout << endl;
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