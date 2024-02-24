//
// Created by Michael on 2024/2/23.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a;
    for (long long i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        a.push_back(temp);
    }
    vector<long long> x;
    for (long long i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        x.push_back(temp);
    }

    vector<long long> q(300001);
    long long max = 0;
    if( abs(x[0])>max){
        max = abs(x[0]);
    }
    if( abs(x[n-1])>max){
        max = abs(x[n-1]);
    }
    for (long long i = 0; i < n; i++) {
        if(x[i]<0){
            q[abs(x[i])] += a[i];
        }else{
            q[x[i]] += a[i];
        }

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