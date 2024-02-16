//
// Created by Michael on 2024/2/13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, avr = 0;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        avr += temp;
        q.push_back(temp);
    }
    avr /= n;
    for (int i = 0; i < n; i++) {
        if (q[i] >= avr) {
            if (i != n - 1) {
                q[i + 1] += q[i] - avr;
                q[i] = avr;
            } else {
                if (q[i] == avr) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }

        } else {
            cout << "NO" << endl;
            break;
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