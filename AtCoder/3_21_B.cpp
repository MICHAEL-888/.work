//
// Created by Michael on 2024/3/21.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {


    long long a, m, l, r;
    long long ans = 0;
    cin >> a >> m >> l >> r;
    //long long temp = a;
    if (a < l) {
        a += (l - a) / m * m;
        while (a < l) {
            a += m;
            if (a > r) {
                cout << 0;
                return;
            }
        }
    } else if (a > r) {
        a -= (a - r) / m * m;
        while (a > l) {
            a -= m;
            if (a < r) {
                cout << 0;
                return;
            }
        }
    }
    ans += (a - l - ((a - l) % m)) / m + 1;
    ans += (r - a) / m;
    //cout << (r - a) / m << endl;
    //cout << (r - a - (r - a) % m) / m << endl;
    //cout << (-80154573736352964 + 80154573737296504) / 2436426 + 1 << endl;
    //cout << (585335723211047198 + 80154573736352964) / 2436426 << endl;
    cout << ans;
    return;

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