//
// Created by Michael on 2024/4/13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int k, q;
    cin >> k >> q;
    vector<int> arr1(k);
    vector<int> arr2(q);
    for (int i = 0; i < k; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < q; i++) {
        if (arr2[i] < arr1[0] - 1) {
            cout << arr2[i] << " ";
        } else {
            cout << arr1[0] - 1 << " ";
        }
    }
    cout << endl;

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