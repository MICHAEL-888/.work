//
// Created by Michael on 24-5-7.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    vector<vector<string>> s(4);
    vector<int> ans(4);
    unordered_map<string, int> ma;
    cin >> n;
    for (int i = 1; i <= 3; i++) {
        s[i].push_back("666");
        for (int j = 1; j <= n; j++) {
            string temp;
            cin >> temp;
            s[i].push_back(temp);
            ma[s[i][j]]++;
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            if (ma[s[i][j]] == 1) {
                ans[i] += 3;
            }
            if (ma[s[i][j]] == 2) {
                ans[i] += 1;
            }
        }
    }
    cout << ans[1] << " " << ans[2] << " " << ans[3] << endl;
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