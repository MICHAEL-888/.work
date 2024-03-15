//
// Created by Michael on 2024/3/11.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> q(n);
    vector<long long> temp(n);
    for (long long i = 0; i < n; i++) {
        cin >> q[i];
    }
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        sum += q[i];
    }
    if (sum == 0) {
        cout << "YES" << endl;
        return;
    }
    if (sum % 4 != 0 && sum != 0) {
        cout << "NO" << endl;
        return;
    }
    for (long long i = 0;; i++) {
        if (i == 0) {
            long long p = max_element(q.begin(), q.end()) - q.begin();
            if (p == 0) {
                cout << "NO" << endl;
                return;
            }
        }
        for (long long j = 1; j < n - 1; j++) {
            if (q[j - 1] > 0 && q[j] >= 2 && q[j + 1] > 0) {
                q[j - 1] -= 1;
                q[j] -= 2;
                q[j + 1] -= 1;
            }
        }


        long long ff = 1;
        if (i % 100 == 0) {
            long long flag = 1;
            for (long long j = 0; j < n; j++) {
                if (temp[j] != q[j]) {
                    ff = 0;
                }
                temp[j] = q[j];
                if (q[j] < 0) {
                    cout << "NO" << endl;
                    return;
                }
                if (q[j] != 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                cout << "YES" << endl;
                return;
            }
            if (ff == 1) {
                cout << "NO" << endl;
                return;
            }

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