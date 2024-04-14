//
// Created by Michael on 2024/3/19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    unsigned long long n;
    cin >> n;
    if (n == 1) {
        cout << "No" << endl;
        return;
    }
    for (unsigned long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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