//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int ansa = 0, ansb = 0;
    for (int i = 0; i < n; i++) {
        int q, w, e, r;
        cin >> q >> w >> e >> r;
        int sum;
        sum = q + e;
        if (w == sum && r != sum) {
            ansa++;
        } else if (w != sum && r == sum) {
            ansb++;
        }

        if (ansa == a + 1) {
            cout << "A" << endl;
            cout << ansb << endl;
            return 0;
        } else if (ansb == b + 1) {
            cout << "B" << endl;
            cout << ansa << endl;
            return 0;
        }
    }
    return 0;

}