//
// Created by Michael on 2024/4/1.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    double a;
    cin >> a;
    double b=0.00001;
    for (int i = 0; i < 1000000000; i++) {
        if(abs(a-b)/max(1.0,abs(b))<=0.0001){
            cout << b << endl;
        }
        b+=0.00001;
    }

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