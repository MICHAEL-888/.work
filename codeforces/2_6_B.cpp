//
// Created by Michael on 2024/2/6.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, count = 0;
    cin >> n;
    vector<int> q;
    vector<int> kkk(27);
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        q.push_back(temp);
        if (temp == 0) {
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 27; j++) {
            if (q[i] == kkk[j]) {
                printf("%c", 'a' - 1 + j);
                kkk[j]++;
                break;
            }
        }
    }
    printf("\n");

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