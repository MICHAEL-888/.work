//
// Created by Michael on 2024/4/6.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, k, pos, ans = 0;
    cin >> n >> k;
    pos = k - 1;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < n; i++) {
        if (q[i] >= q[k - 1]) {
            int temp = q[i];
            pos = i;
            q[i] = q[k - 1];
            q[k - 1] = temp;
            break;
        }
    }
    if (pos == 0) {
        for (int i = 0; i < n; i++) {
            if (q[1] < q[0]) {
                ans++;
                q.erase(q.begin() + 1);
            } else {
                break;
            }
        }
    } else {
        int kk = 0;
        int qq = pos;
        for (int i = 0; i < qq;) {
            if (q[i] < q[qq]) {
                //ans++;
                kk++;
                qq--;
                q.erase(q.begin() + i);
            } else {
                break;
            }
        }
        if (kk == pos) {
            ans++;
        }
        for (int i = qq + 1; i < n;) {
            if (q[i] < q[qq]) {
                ans++;
                q.erase(q.begin() + i);
            } else {
                break;
            }
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