#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    unordered_map<long long, long long> a(n);
    unordered_map<long long, long long> x(n);
    unordered_map<long long, long long> q;

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max = 0;
    for (long long i = 0; i < n; i++) {
        cin >> x[i];
        max = std::max(max, abs(x[i]));
        q[abs(x[i])] += a[i];
    }

    long long zd = 0;
    for (long long i = 1; i <= max; i++) {
        zd += k;
        zd -= q[i];
        if (zd < 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
