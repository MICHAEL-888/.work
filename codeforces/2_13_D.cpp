//
// Created by Michael on 2024/2/13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n,x,y,count=0;
    cin >> n >> x >> y;
    vector<long long> q;
    for (long long i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        q.push_back(temp);
    }
    for (long long i = 0; i < n-1; i++) {
        for (long long j = i+1; j < n; j++) {
            //cout << i << " "  << j << endl;
            if((double)(q[i]+q[j])/(double)x==(q[i]+q[j])/x && (double)(q[i]-q[j])/(double)y==(q[i]-q[j])/y){
                count++;
            }
        }
    }
    cout << count << endl;
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