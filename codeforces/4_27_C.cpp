//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    int flag = 0;
    int kk = count(q.begin(), q.end(), 1);
    while (count(q.begin(), q.end(), 0) != n) {
        sort(q.begin(), q.end());
        int temp = q[upper_bound(q.begin(), q.end(), 0) - q.begin()];
        for (int i = 0; i < n; i++) {
            if (q[i] >= temp) {
                q[i] -= temp;
            }

        }
        if (count(q.begin(), q.end(), 0) == n) {
            if (!flag) {
                cout << "Alice" << endl;
                return;
            } else {
                if (n % 2 == 0 && kk == 0) {
                    cout << "Alice" << endl;
                    return;
                }
                cout << "Bob" << endl;
                return;
            }
        }
        flag = !flag;
    }

    /*
    int flag = 0;
    while (count(q.begin(), q.end(), 0) != n) {
        if (count(q.begin(), q.end(), 0) != n - 1) {
            for (int i = 0; i < n; i++) {
                if (q[i] >= 1) {
                    q[i]--;
                }
            }
            if (count(q.begin(), q.end(), 0) == n) {
                if (!flag) {
                    cout << "Alice" << endl;
                    return;
                } else {
                    cout << "Bob" << endl;
                    return;
                }
            }
        } else {
            if (!flag) {
                cout << "Alice" << endl;
                return;
            } else {
                cout << "Bob" << endl;
                return;
            }
        }
        flag = !flag;
    }
     */
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