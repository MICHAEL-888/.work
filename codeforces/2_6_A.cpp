//
// Created by Michael on 2024/2/6.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, count1 = 0, count2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            count1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'B') {
            count2 = i;
            break;
        }
    }
    if (count2 == 0 && count1 == 0 && s[0] != 'B') {
        cout << 0 << endl;
    } else if (n == 1 && s[0] == 'W') {
        cout << 0 << endl;
    } else {
        cout << count2 - count1 + 1 << endl;
    }
    //cout << count2 << count1;
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