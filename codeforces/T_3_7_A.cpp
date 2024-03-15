//
// Created by Michael on 2024/3/7.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int fa[10000];

int find(int x) {
    if (fa[x] == x) {
        return x;
    } else {
        fa[x] = find(fa[x]);
        return fa[x];
    }
}

void merge(int x, int y) {
    fa[find(x)] = find(y);
}

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        merge(x, y);
    }

    vector<int> q1;
    vector<int> q2;
    for (int i = 0; i < p; i++) {
        int x, y;
        cin >> x >> y;
        q1.push_back(x);
        q2.push_back(y);
    }
    for (int i = 0; i < p; i++) {
        if (find(q1[i]) == find(q2[i])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;

}