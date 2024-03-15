//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    vector<int> q(3);
    for (int i = 0; i < 3; i++) {
        cin >> q[i];
    }
    sort(q.begin(), q.end());
    for (int i = 0; i < 3; i++) {
        if (i != 2) {
            cout << q[i] << "->";
        } else {
            cout << q[i];
        }

    }

}