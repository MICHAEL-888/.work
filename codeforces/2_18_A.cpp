//
// Created by Michael on 2024/2/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, count = 0, pos = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (pos < n - 1 && s[pos + 1] == '@') {
            count++;
            pos++;
        } else if (pos < n - 2 && s[pos + 2] == '@') {
            count++;
            pos += 2;
        } else if (pos < n - 1 && s[pos + 1] == '.') {
            pos++;
        } else if (pos < n - 2 && s[pos + 2] == '.') {
            pos += 2;
        } else {
            break;
        }
    }
    cout << count << endl;

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