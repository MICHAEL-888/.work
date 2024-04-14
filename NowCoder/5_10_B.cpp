//
// Created by Michael on 24-5-1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;


int cf() {
    string s1, s2;
    cin >> s1 >> s2;
    int64_t sum1 = 0;
    int64_t sum2 = 0;
    int64_t sum3 = 0;
    int64_t mod = 998244353;
    for (int z = 0; z < s1.size(); z++) {
        if (s1[z] > s2[z]) {
            char temp;
            temp = s1[z];
            s1[z] = s2[z];
            s2[z] = temp;
        }
    }
    for (int z = 0; z < s1.size(); z++) {
        sum1 = ((sum1 * 10) + s1[z] - '0') % mod;
    }
    for (int z = 0; z < s2.size(); z++) {
        sum2 = ((sum2 * 10) + s2[z] - '0') % mod;
    }
    sum3 = (sum1 * sum2) % 998244353;
    cout << sum3;

    return 0;
}


void solve() {
    int n;
    cin >> n;
    cf();
}


signed main(void) {


    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}