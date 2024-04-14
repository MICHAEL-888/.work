//
// Created by Michael on 24-5-2.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;
vector<bool> q1(100000);
vector<bool> q2(100000);

void solve() {
    int n;
    cin >> n;
    
    for (int i = 0; i < (n + 1) / 2; i++) {
        if (i == 0) {
            int a;
            cin >> a;
        }
        if (i != 0) {
            int a, b;
            cin >> a >> b;
            if (b < 100000) {
                for (int j = a; j < b; j++) {
                    q1[j] = true;
                }
            } else if (a < 100000 && b >= 100000) {
                for (int j = a; j < 100000; j++) {
                    q1[j] = true;
                }
                for (int j = 0; j < b - 100000; j++) {
                    q2[j] = true;
                }
            } else {
                for (int j = a; j < b; j++) {
                    q2[j] = true;
                }
            }
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        if (b < 100000) {
            for (int j = a; j < b; j++) {
                if (q1[j] == 1) {
                    ans++;
                }
            }
        } else if (a < 100000 && b >= 100000) {
            for (int j = a; j < 100000; j++) {
                if (q1[j] == 1) {
                    ans++;
                }
            }
            for (int j = 0; j < b - 100000; j++) {
                if (q2[j] == 1) {
                    ans++;
                }
            }
        } else {
            for (int j = a; j < b; j++) {
                if (q2[j] == 1) {
                    ans++;
                }
            }
        }
        cout << ans << endl;

    }
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