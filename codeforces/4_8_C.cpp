//
// Created by Michael on 2024/4/8.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    ll n, k, a1, a2;
    cin >> n >> k;
    vector<ll> q(n);
    for (ll i = 0; i < n; i++) {
        cin >> q[i];
    }
    a1 = q.size();
    a2 = a1;
    ll flag = 0;
    int bb = 0;
    while (k != 0 && !q.empty()) {
        if (q[0] < q[a2 - 1] && 2 * q[0] < k && bb == 0) {
            q[a2 - 1] -= q[0];
            //q[0]=0;
            k -= 2 * q[0];
            q.erase(q.begin());
            a2--;
            continue;
        } else if (q[0] > q[a2 - 1] && 2 * q[a2 - 1] < k && bb == 0) {
            q[0] -= q[a2 - 1];
            //q[0]=0;
            k -= 2 * q[a2 - 1];
            q.pop_back();
            a2--;
            continue;
        } else {
            bb = 1;
            /*k -= 2 * q[0];
            a2--;
            q.erase(q.begin());
            q.pop_back();*/
        }
        if (flag == 0) {
            q[0]--;
            flag = 1;
            k--;
            if (q[0] == 0) {
                q.erase(q.begin());
                a2--;
                bb = 0;
            }
        } else {
            q[a2 - 1]--;
            flag = 0;
            k--;
            if (q[a2 - 1] == 0) {
                q.pop_back();
                a2--;
                bb = 0;
            }
        }
    }
    //a2 = q.size();
    cout << a1 - a2 << endl;
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