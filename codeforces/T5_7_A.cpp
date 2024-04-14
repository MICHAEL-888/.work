//
// Created by Michael on 24-5-7.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

const int MAXN = 1e5 + 5;

int h[MAXN] = {0};
int dp[MAXN] = {0};

int cost(int i, int j) {
    return abs(h[i] - h[j]);
}

void solve() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    dp[2] = cost(1, 2);
    for (int i = 3; i <= n; i++) {
        int minkk = MAXN;
        for (int j = 1; j <= k; j++) {
            int temp = dp[i - j] + cost(i - j, i);
            if (temp < minkk) {
                minkk = temp;
            }
        }
        dp[i] = minkk;
    }

    cout << dp[n];

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