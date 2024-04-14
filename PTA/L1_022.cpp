//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++) {
        if (q[i] % 2 != 0) {
            ans1++;
        } else {
            ans2++;
        }
    }
    cout << ans1 << " " << ans2;
}