//
// Created by Michael on 2024/2/11.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    vector <int> q;
    vector <int> a(200000);
    int n,count=1,max=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            a[abs(q[i]-q[j])]++;
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout << max << endl;
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