//
// Created by Michael on 2024/2/27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<long long, long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            a[i] = a[i] - a[i] - a[i];
        }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << endl;
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