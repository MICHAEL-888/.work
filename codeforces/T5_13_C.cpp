//
// Created by Michael on 24-5-13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, ans = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        mp[temp1] = temp2;
    }
    while (!mp.empty()) {
        int temp = mp.begin()->second;
        while (temp) {
            if (temp >= prev(mp.end())->second) {
                ans += (prev(mp.end())->first - mp.begin()->first) * prev(mp.end())->second;
                temp -= prev(mp.end())->second;
                auto ls = prev(mp.end());
                mp.erase(ls);
            } else {
                ans += (prev(mp.end())->first - mp.begin()->first) * temp;
                prev(mp.end())->second -= temp;
                mp.erase(mp.begin());
                temp = 0;
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