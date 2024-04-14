//
// Created by Michael on 24-5-7.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> q(27);
    q[s1[0] - 'a']++;
    q[s1[1] - 'a']++;
    q[s2[0] - 'a']++;
    q[s2[1] - 'a']++;
    int kk = 0;
    for (int i = 0; i < 27; i++) {
        if (q[i] == 4) {
            cout << 0 << endl;
            return;
        } else if (q[i] == 2) {
            kk++;
        } else if (q[i] == 3) {
            cout << 1 << endl;
            return;
        }
    }
    if (kk == 0) {
        cout << 3 << endl;
    } else if (kk == 1) {
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }

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