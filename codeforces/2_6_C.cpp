//
// Created by Michael on 2024/2/6.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n, m, k, countA = 0, countB = 0;
    cin >> n >> m >> k;
    set<int> a;
    set<int> b;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp >= 1 && temp <= k) {
            a.insert(temp);
        }

    }
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        if (temp >= 1 && temp <= k) {
            b.insert(temp);
        }
    }


    for (auto p = a.begin(); p != a.end(); p++) {
        countA++;
    }
    for (auto p = b.begin(); p != b.end(); p++) {
        countB++;
    }
    int count = 0;


    if (*a.rbegin() <= *b.rbegin()) {
        for (auto p = a.begin(); p != a.end(); p++) {
            if (*p >= 1 && *p <= k && count < k / 2) {
                s.insert(*p);
                count++;
                if (count == k / 2) {
                    break;
                }
            }
        }
        count = 0;
        for (auto p = b.begin(); p != b.end(); p++) {
            if (*p >= 1 && *p <= k && count < k / 2 && s.count(*p) == 0) {
                s.insert(*p);
                count++;
                if (count == k / 2) {
                    break;
                }
            }
        }
        count = 0;
    } else {
        for (auto p = b.begin(); p != b.end(); p++) {
            if (*p >= 1 && *p <= k && count < k / 2) {
                s.insert(*p);
                count++;
                if (count == k / 2) {
                    break;
                }
            }
        }
        count = 0;
        for (auto p = a.begin(); p != a.end(); p++) {
            if (*p >= 1 && *p <= k && count < k / 2 && s.count(*p) == 0) {
                s.insert(*p);
                count++;
                if (count == k / 2) {
                    break;
                }
            }
        }
        count = 0;
    }


    for (auto p = s.begin(); p != s.end(); p++) {
        count++;
    }

    if (count == k && count != 0) {
        //cout << "YES" << endl;
        printf("YES\n");
    } else {
        //cout << "NO" << endl;
        printf("NO\n");
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