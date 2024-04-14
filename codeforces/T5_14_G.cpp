//
// Created by Michael on 24-5-14.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int b, t1, t2;
    double a1, a2;
    double time1 = 0, time2 = 0;
    cin >> b >> t1 >> a1 >> t2 >> a2;
    int sec = 0;
    while (a1 != 0 && a2 != 0) {
        if (sec >= t1 && sec < t2) {
            if (a1 >= b) {
                a1 -= b;
            } else {
                time1 = sec + a1 / b;
                a1 = 0;
            }

        } else if (sec < t1 && sec >= t2) {
            if (a2 >= b) {
                a2 -= b;
            } else {
                time2 = sec + a2 / b;
                a2 = 0;
            }
        } else if (sec >= t1 && sec >= t2) {
            double temp = b / 2.0;
            if (a1 >= temp && a2 >= temp) {
                a1 -= temp;
                a2 -= temp;
            } else if (a1 >= temp && a2 < temp) {
                time2 = sec + a2 / temp;
                time1 = time2 + (a1-a2) / b;
                a1 = 0;
                a2 = 0;
            } else if (a1 < temp && a2 >= temp) {
                time1 = sec + a1 / temp;
                time2 = time1 + (a2-a1) / b;
                a1 = 0;
                a2 = 0;
            }
        }
        sec++;
    }
    if(time1==0){

    }
    cout << time1 - t1 << " " << time2 - t2 << endl;
}


signed main(void) {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}