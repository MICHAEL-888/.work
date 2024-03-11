//
// Created by Michael on 2024/3/9.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, ans = 0;
    cin >> m >> n;
    vector<int> q1(m);
    for (int i = 0; i < m; i++) {
        cin >> q1[i];
    }
    vector<int> q2(n);
    for (int i = 0; i < n; i++) {
        cin >> q2[i];
    }
    sort(q1.begin(), q1.end());
    for (int i = 0; i < n; i++) {
        vector<int>::iterator lower;
        lower = lower_bound(q1.begin(), q1.end(), q2[i]);
        int min1 = 1000000001;
        if (lower != q1.end()) {
            min1 = min(min1, abs(*lower - q2[i]));
        }
        if (lower != q1.begin()) {
            min1 = min(min1, abs(*prev(lower) - q2[i]));
        }
        ans += min1;
    }
    cout << ans << endl;
}