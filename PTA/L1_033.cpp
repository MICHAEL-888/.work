//
// Created by Michael on 2024/3/25.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

vector<int> q(4);

void check() {
    for (int i = 3; i >= 0; i--) {
        if (q[i] == 10) {
            q[i] = 0;
            q[i - 1]++;
        }
    }
}

int main() {
    int y;
    int n, ans = 0;
    cin >> y >> n;

    for (int i = 3; i >= 0; i--) {
        q[i] = y % 10;
        y /= 10;
    }
    for (int i = 0; i < 3000; i++) {
        int flag = 1;
        for (int j = 0; j < 3; j++) {
            if (count(q.begin(), q.end(), q[j]) > 4 - n + 1) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << ans << " ";
            for (int j = 0; j < 4; j++) {
                cout << q[j];

            }
            return 0;
        }
        q[3]++;
        ans++;
        check();

    }

    return 0;
}