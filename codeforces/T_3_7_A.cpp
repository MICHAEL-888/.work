//
// Created by Michael on 2024/3/7.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
int q[5001][5001] = {0};
const int X = 5001;
int f[X];

int find(int x) {
    if (x != f[x]) {
        return f[x] = find(f[x]);
    }
    return f[x];
}

void join(int x, int y) {
    int fx = find(x), fy = find(y);
    if (fx != fy) {
        f[fy] = fx;
    }
}

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int q1, q2;
    for (int i = 1; i <= X; i++) {
        f[i] = i;
    }

    for (int i = 0; i < m; i++) {
        cin >> q1 >> q2;
        join(q1, q2);
    }

    int pi, pj, temp;
    vector<int> kk1;
    vector<int> kk2;
    for (int i = 0; i < p; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        kk1.push_back(temp1);
        kk2.push_back(temp2);
    }
    for (int i = 0; i < p; i++) {
        if (f[find(kk1[i])] == find(kk2[i])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

}
