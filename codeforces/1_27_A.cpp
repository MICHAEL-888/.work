//
// Created by Michael on 2024/1/27.
//
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

#define endl "\n"
#pragma GCC optimize(3)

using namespace std;

signed main() {
    int t;
    string tre = "abcdefghijklmnopqrstuvwxyz";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        if (n == 1) {
            for (int j = 0; j < k; j++) {
                cout << tre[j];
            }
            cout << endl;
            continue;
        }

        for (int l = 0; l < n; l++) {
            for (int j = 0; j < k; j++) {

                cout << tre[j];
            }
        }

        cout << endl;

    }
    return 0;
}