//
// Created by Michael on 2024/3/14.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int n,m,count=0;
    cin >> n >> m;
    vector<int>q(n+1);
    for(int i=3;i<1000000;i+=3){
        if(q[i]==0){
            cout << i;
            q[i]++;
        }else{

        }
        if(i>n){
            i-=n;
        }
    }

}