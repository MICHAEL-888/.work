//
// Created by Michael on 2024/3/26.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int n, m, s;
    cin >> n >> m >> s;
    vector<char> tt(m);
    vector<stack<char>> z(n);
    stack<char> box;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tt[j];

        }
        for (int j = m - 1; j >= 0; j--) {
            z[i].push(tt[j]);
        }
    }
    int temp = 0;
    vector<int> meth;
    while (temp != -1) {
        cin >> temp;
        if (temp != -1) {
            meth.push_back(temp);
        } else {
            break;
        }
    }

    for (int i = 0; i < meth.size(); i++) {
        if (meth[i] == 0) {
            if (box.empty()) {
                continue;
            } else {
                cout << box.top();
                box.pop();
                continue;
            }
        } else {
            if (z[meth[i] - 1].empty()) {
                continue;
            }
            if (box.size() == s) {
                cout << box.top();
                box.pop();
                box.push(z[meth[i] - 1].top());
                z[meth[i] - 1].pop();
                continue;
            } else {
                box.push(z[meth[i] - 1].top());
                z[meth[i] - 1].pop();
                continue;
            }
        }
    }

    return 0;
}