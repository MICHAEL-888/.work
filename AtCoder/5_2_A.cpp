//
// Created by Michael on 24-5-2.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int temp = n % 10;
    if (temp == 1 || temp == 2 || temp == 0) {
        cout << n / 10 * 10;
    } else if (temp == 3 || temp == 4 || temp == 5 || temp == 6 || temp == 7) {
        cout << n / 10 * 10 + 5;
    } else {
        cout << n / 10 * 10 + 10;
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