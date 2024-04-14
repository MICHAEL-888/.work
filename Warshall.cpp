//
// Created by Michael on 24-4-22.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    cout << "请输入矩阵行数：" << endl;
    int n;
    cin >> n;
    cout << "请输入矩阵：" << endl;
    vector<vector<int>> q(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            q[i].push_back(temp);
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (q[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    q[i][k] |= q[j][k];
                }
                cout << "————————————" << endl;
                for (int x = 0; x < n; x++) {
                    for (int y = 0; y < n; y++) {
                        cout << q[x][y] << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}