//
// Created by Michael on 2024/2/18.
//
#include <bits/stdc++.h>

#pragma GCC optimize(3, "Ofast", "inline")
#define endl '\n'
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> q;
    for (long long i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        q.push_back(temp);
    }
    string s;
    cin >> s;
    long long flag = 0;

    for (long long i = 0; i < n; i++) {
        long long temp = 1;
        for (long long j = 0; j < q.size(); j++) {
            if (flag == 0) {
                q[j] = q[j] % m;
            }
            temp = (temp * q[j]) %m;
        }
        cout << temp % m << " ";
        if (s[i] == 'L') {
            q.erase(q.begin());
        } else {
            q.pop_back();
        }
        flag = 1;
    }
    cout << endl;

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