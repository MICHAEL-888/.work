//
// Created by Michael on 24-4-19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, m, k, ansx, ansy, num = 0;
    cin >> n >> m >> k;
    int ans = 0;
    int tempn = n, tempm = m;
    while (tempn > 1 || tempm > 1) {
        ans++;
        tempn -= 2;
        tempm -= 2;
    }
    /*if (n >= 3) {
        ans += (n - 1) / 2;
    }
    if (m >= 3) {
        ans += (m - 1) / 2;
    }*/
    int q[k][2];
    for (int i = 0; i < k; i++) {
        cin >> q[i][0] >> q[i][1];
    }
    ansx = n / 2 + 1;
    ansy = m / 2 + 1;
    for (int i = 0; i < k; i++) {
        int temp = 0;
        temp += abs(q[i][0] - ansx);
        temp += abs(q[i][1] - ansy);
        if (temp <= ans) {
            num++;
        }
    }
    cout << num;
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