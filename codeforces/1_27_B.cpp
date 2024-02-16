//
// Created by Michael on 2024/1/27.
//
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

#define endl "\n"
#pragma GCC optimize(3)

using namespace std;

int GCD(int x, int y) {
    int z = y;
    while (x % y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    return z;
}


signed main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x,n;//10 3  14 3
        cin >> x >> n;
        int hh,kk;
        hh = x / n;//3
        vector <int> q;
        q.push_back(GCD(hh,x-hh*(n-1)));
        for (int j = x; j > 0; j--) {
            if(j/n == (float)j/(float)n) {
                kk=j;
                break;
            }
        }



    }
}