//
// Created by Michael on 24-4-25.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    unsigned long long n, k;
    cin >> n >> k;
    if (k % n == 0) {
        cout << k / n;
    } else {
        cout << (unsigned long long)((long double) k / (long double) n + 1);
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