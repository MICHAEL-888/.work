//
// Created by Michael on 2024/3/22.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    sort(q.begin(), q.end());
    int mid, temp, ans = 0;
    mid = (int) ((float) n / 2.0 + 0.5) - 1;//减一为实际位置
    temp = q[(int) ((float) n / 2.0 + 0.5) - 1];
    for (int i = mid; i < n; i++) {
        if (q[i] == temp) {
            ans++;
        } else{
            break;
        }
    }
    //cout << (int)((float)n/2.0+0.5);
//    while (q[mid] == temp) {
//        q[mid]++;
//        ans++;
//        sort(q.begin(), q.end());
//    }
    cout << ans << endl;

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