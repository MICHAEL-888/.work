//
// Created by Michael on 2024/2/27.
//
//abin abin abin abin abin
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int a, b, l, count = 0;
    unordered_map<long long, long long> countk;
    cin >> a >> b >> l;
    for (int x = 0; pow(a, x) <= l; x++) {
        for (int y = 0; pow(b, y) <= l; y++) {
            double k;
            long long temp = pow(a, x) * pow(b, y);
            if (l >= temp) {
                k = (double) l / (double) temp;
                if (k == (int) k) {
                    countk[(int) k]++;
                }
            }

        }
    }
    for (auto &p: countk) {
        if (p.second != 0) {
            count++;
        }
    }
    cout << count << endl;

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