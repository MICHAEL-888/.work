//
// Created by Michael on 2024/1/18.
//
#include <iostream>
#include <bits/stdc++.h>
#include <vector>

#define endl "\n"
#pragma GCC optimize(3)

using namespace std;

signed main() {
    int t, n, p = 0, temp, count = 0, hc = 0;
    scanf("%lld", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp);
            arr[j] = (int) pow(2, temp);
        }
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int a = arr[j] + arr[k];
                int b = abs(arr[j] - arr[k]);
                for (int l = k + 1; l < n; l++) {
                    if (a > arr[l] && b < arr[l]) {
                        count++;
                    }
                }

            }
        }
        cout << count << endl;
        count = 0;
        hc = 0;
    }
    return 0;
}