//
// Created by Michael on 2024/2/23.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, ans = 0, p = 0;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        if (q[i] == 0) {
            ans++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (q[i] == 0) {
            ans--;
        } else if (q[i] == 1) {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (q[i] == 0) {
            ans--;
        } else if (q[i] == 1) {
            break;
        }
    }
    cout << ans << endl;

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