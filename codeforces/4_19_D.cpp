//
// Created by Michael on 24-4-19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, ans = 0;
    cin >> n;
    vector<int> q(n);
    vector<int> q2;//辅助全排列咯
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        q[i] = s[i] - 48;
    }
    for (int i = 0; i < q.size(); i++) {
        q2 = {0};
        q2.resize(i + 1);
        do {
            if (q[q2[0]] != 0 && q[q2[i]] % 2 == 0) {
                ans++;
            }
            //cout << q[0] << ' ' << q[1] << ' ' << q[2] << '\n';
        } while (next_permutation(q2.begin(), q2.end()));      ///获取下一个较大字典序排列，如果3改为2，只对前两个数全排列
    }
    cout << ans;

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