//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> q(101);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q[temp]++;
    }
    int flag = 0;
    for (int i = 1; i < 101; i++) {
        if (q[i] >= k) {
            flag = 1;
        }
    }
    if (flag) {
        cout << k - 1 << endl;
    } else {
        cout << n << endl;
    }
    /*
    for (int m = 0; m < 500; m++) {
        int flag = 0;
        for (int i = 1; i < 101; i++) {
            if (q[i] >= k) {
                flag = 1;
                for (int j = 1; j < 101; j++) {
                    if (q[j] > 0) {
                        q[i] -= k;
                        q[j] += k - 1;
                        break;
                    }
                }
            }
        }
        if (!flag) {
            break;
        }
    }
    int ans = 0;
    for (int i = 1; i < 101; i++) {
        ans += q[i];
    }
    cout << ans << endl;
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