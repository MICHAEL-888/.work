//
// Created by Michael on 24-4-26.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

long long gcd(long long x, long long y) {
    return y ? gcd(y, x % y) : x;
}

void solve() {
    long long x, y, z;
    cin >> x >> y >> z;
    for (long long a = (x + y) / 2; a <= 5000000000000000000; a += z) {
        for (long long b = y - a; b <= a - x; b += z) {
            if (b <= 0 || a <= 0) {
                continue;
            }
            //cout << gcd(a,b);
            if (gcd(a, b) == z) {
                if (a - b >= x || b - a >= x) {
                    if (a + b >= y || a + b <= -y) {
                        cout << b << " " << a;
                        return;
                    }
                }

            }
        }
    }
    /*
    for (unsigned long long a = (x + y) / 2; a <= 5000000000000000000; a++) {
        for (unsigned long long b = y - a; b <= a-x; b++) {
            //cout << gcd(a,b);
            if (gcd(a, b) == z) {
                cout << a << " " << b;
                return;
            }
            if(a>z)
        }
    }*/


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