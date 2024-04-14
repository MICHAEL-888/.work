//
// Created by Michael on 2024/3/22.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

ll maxSubArray(const std::vector<ll> &nums) { //求出最大子序列和
    ll maxSoFar = INT_MIN, maxEndingHere = 0;
    for (ll num: nums) {
        maxEndingHere = maxEndingHere + num;
        if (maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere;
        }
        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        }
    }
    return maxSoFar;
}

void solve() {
    ll n, k;
    //int a = -11; // 你的负数
    //int b = 1000000007; // 你的模数
    //int result = (a % b + b) % b;
    //cout << result;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll maxval;
    maxval = maxSubArray(a);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += a[i];
    }
    if (maxval <= 0) {
        cout << (sum % 1000000007 + 1000000007) % 1000000007 << endl;
    } else {
        for (ll i = 0; i < k; i++) {

            sum += maxval;
            sum = (sum % 1000000007 + 1000000007) % 1000000007;
            maxval *= 2;
            maxval = (maxval % 1000000007 + 1000000007) % 1000000007;
        }

        cout << (sum % 1000000007 + 1000000007) % 1000000007 << endl;
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