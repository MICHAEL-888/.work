//
// Created by Michael on 2024/2/13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n,type=0,min=200001;
    cin >> n;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    int a=0,b=n;
    for (int i = 0; i < n; i++) {
        if(q[i]==q[0]){
            a=i;
        } else{
            break;
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if(q[i]==q[0]){
            b=i;
        } else{
            break;
        }
    }
    if(b-a-1 <= min){
        min=b-a-1;
    }
    //cout << min << endl;


    a=-1;
    b=n;
    for (int i = n-1; i >= 0; i--) {
        if(q[i]==q[n-1]){
            b=i;
        } else{
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if(q[i]==q[n-1]){
            a=i;
        } else{
            break;
        }
    }
    if(b-a-1 <= min){
        min=b-a-1;
    }
    if(min==n-n-n){
        cout << 0 << endl;
    }else{
        cout << min << endl;
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