//
// Created by Michael on 2024/4/8.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a * 2 < b) {
        cout << n * a << endl;
    } else {
        if (n % 2 == 0) {
            cout << n / 2 * b << endl;
        } else {
            cout << a + (n - 1) / 2 * b << endl;
        }
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