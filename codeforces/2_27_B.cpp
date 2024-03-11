//
// Created by Michael on 2024/2/27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    long long n, sum = 0;
    cin >> n;
    vector<long long> a(n);
    unordered_map<long long, long long> count(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++) {
        long long temp;
        sum += a[i];
        temp = a[i] % 3;
        if (temp == 0) {
            count[0]++;
        } else if (temp == 1) {
            count[1]++;
        } else {
            count[2]++;
        }
    }
    if (sum % 3 == 0) {
        cout << 0 << endl;
        return;
    }
    sum = sum % 3;
    if (sum == 1) {
        if (count[1] >= 1) {
            cout << 1 << endl;
            return;

        } else {
            cout << 2 << endl;
            return;
        }
    } else if (sum == 2) {
        cout << 1 << endl;
        return;
    } else {
        cout << 0 << endl;
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