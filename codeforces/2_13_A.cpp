//
// Created by Michael on 2024/2/13.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    int n;
    string s="0abcdefghijklmnopqrstuvwxyz";
    string ans="aaa";
    cin >> n;
    if(n<=28){
        ans[2]=s[n-2];
    } else{
        ans[2]='z';
        n-=26;
        if(n>=27){
            ans[1]='z';
            n-=26;
            ans[0]=s[n];
        }else{
            ans[1]=s[n-1];
        }
    }
    cout << ans << endl;
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