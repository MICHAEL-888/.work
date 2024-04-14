//
// Created by Michael on 2024/3/25.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    struct stu {
        int height;
        int weight;
    };
    struct stu q;
    cin >> q.height >> q.weight;
    if (abs(q.weight - (q.height - 100) * 0.9 * 2.0) < (q.height - 100) * 0.9 * 2.0 * 0.1) {
        cout << "You are wan mei!" << endl;
    } else {
        if (q.weight < (q.height - 100) * 0.9 * 2.0) {
            cout << "You are tai shou le!" << endl;
        } else {
            cout << "You are tai pang le!" << endl;
        }
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