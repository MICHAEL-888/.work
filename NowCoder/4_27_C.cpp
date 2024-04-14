//
// Created by Michael on 24-4-27.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<stack<int>> q(n);
    unordered_map<int, int> ma;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            ma[temp] = i;
            q[i].push(temp);
        }
    }
    for (int i = 0; i < k; i++) {
        int temp;
        cin >> temp;

        if (q[ma[temp]].size() != 0 && q[ma[temp]].top() == temp) {
            q[ma[temp]].pop();
        } else {
            cout << "NO";
            return;
        }
        /*
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (q[j].size() != 0 && q[j].top() == temp) {
                q[j].pop();
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "NO";
            return;
        }*/
    }
    for (int i = 0; i < n; i++) {
        if (q[i].size() != 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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