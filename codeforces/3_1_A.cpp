//
// Created by Michael on 2024/3/1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    sort(q.begin(), q.end());
    int i, j, k, l;
    i = q[0];
    k = q[1];
    j = q[n - 1];
    l = q[n - 2];
    cout << abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i) << endl;

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