//
// Created by Michael on 2024/3/28.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int num;
    string s;
    cin >> num;
    s = to_string(num);
    if (num == 1) {
        cout << "YES\n";
        return;
    }
    bool flag = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES\n";
        return;
    }
    if (num % 10 != 0 && num % 10 != 1) {
        cout << "NO\n";
    } else if (num % 11 != 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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