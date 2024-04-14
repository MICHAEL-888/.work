//
// Created by Michael on 24-4-23.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, x;
    cin >> n >> x;
    if (x == 0) {
        cout << "Yes";
        return;
    }
    x = abs(x);
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    sort(q.begin(), q.end());


    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        int cha = 0;
        for (int j = i + 1; j < n; j++) {
            int temp = abs(q[i] - q[j]);
            if (temp > cha && cha > x) {
                break;
            }
            if (temp < cha && cha < x) {
                break;
            }
            cha = temp;
            if (temp == x) {
                cout << "Yes";
                return;
            } else if (temp < x) {
                if (flag == 1) {
                    break;
                }
                flag = 0;
            } else if (temp > x) {
                if (flag == 0) {
                    break;
                }
                flag = 1;
            }
        }
    }
    cout << "No";
}


signed main(void) {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}