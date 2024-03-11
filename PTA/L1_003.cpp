//
// Created by Michael on 2024/3/8.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string n;
    cin >> n;
    vector<int> q(1001);
    for (int i = 0; i < n.size(); i++) {
        q[(int) n[i] - 48]++;
    }
    for (int i = 0; i < q.size(); i++) {
        if (q[i] != 0) {
            cout << i << ":" << q[i] << endl;
        }
    }
}