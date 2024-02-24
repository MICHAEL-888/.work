//
// Created by Michael on 2024/2/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        if (q[i] <= ans) {
            int temp = q[i];
            for (int j = 2; temp <= ans; j++) {
                temp = j * q[i];
            }
            ans = temp;
        } else {
            ans = q[i];
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