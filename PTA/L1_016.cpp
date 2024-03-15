//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    vector<string>q;
    int n,flag=0;
    cin >> n;
    while(n--){
        string temp;
        cin >> temp;
        q.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<17;j++){
            if(q[i][j]=='X'){
                cout << q[i] << endl;
                flag=1;
            }
        }
    }

}