//
// Created by Michael on 2024/3/1.
//
#include <bits/stdc++.h>

#pragma GCC optimize(2)

#define endl '\n'
using namespace std;

void solve() {
    int n, temp, ans1 = 0;
    cin >> n;
    temp = n;
    while (temp != 0) {
        if (temp >= 150000030) {
            temp -= 150000000;
            ans1 += 10000000;
            continue;
        } else if (temp >= 15000030) {
            temp -= 15000000;
            ans1 += 1000000;
            continue;
        } else if (temp >= 1500030) {
            temp -= 1500000;
            ans1 += 100000;
            continue;
        } else if (temp >= 150030) {
            temp -= 150000;
            ans1 += 10000;
            continue;
        } else if (temp >= 15030) {
            temp -= 15000;
            ans1 += 1000;
            continue;
        } else if (temp >= 1530) {
            temp -= 1500;
            ans1 += 100;
            continue;
        }


        if (temp == 30) {
            temp -= 30;
            ans1 += 2;
            continue;
        } else if (temp == 23) {
            temp -= 23;
            ans1 += 3;
            continue;
        } else if (temp == 20) {
            temp -= 20;
            ans1 += 2;
            continue;
        } else if (temp == 12) {
            temp -= 12;
            ans1 += 2;
            continue;
        } else if (temp >= 15) {
            temp -= 15;
            ans1++;
        } else if (temp >= 10) {
            temp -= 10;
            ans1++;
        } else if (temp >= 6) {
            temp -= 6;
            ans1++;
        } else if (temp >= 3) {
            temp -= 3;
            ans1++;
        } else if (temp >= 1) {
            temp -= 1;
            ans1++;
        }
    }

    cout << ans1 << endl;

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