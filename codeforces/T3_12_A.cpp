//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>q(n+1);
    for(int i=0;;i++){
        int pos=min_element(q.begin()+1,q.end()) - q.begin();
        if(q[pos]<2*k){
            cout << pos << " ";
            q[pos]++;
        }
        pos=min_element(q.begin()+1,q.end()) - q.begin();
        if(q[pos]<2*k){
            cout << pos << endl;
            q[pos]++;
        }
        if(i%100==0){
            int count=0;
            for(int j=0;j<n;j++){
                if(q[j]==2*k){
                    count++;
                }
            }
            if(count==n){
                break;
            }
        }

    }
}