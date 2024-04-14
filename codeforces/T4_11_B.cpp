//
// Created by Michael on 2024/4/11.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int m, n, ans;
    cin >> m >> n;
    vector<int> q(m * n + 1);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q[temp]++;
    }
    for (int i = m * n; i > m * n - n; i--) {
        if (q[i] == 0) {
            for (int j = i; j > m * n - n; j--) {
                if (q[j] == 1) {
                    q[j] = 0;
                    i--;
                    break;
                }
            }
        }
    }
    for (int i = m * n; i > m * n - n; i--) {
        if (q[i] == 1) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}