//
// Created by Michael on 2024/3/14.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int n;
char path[12];
void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) {
            cout << path[i];
        }
        puts("");
        return;
    }

    for (int i = 1; i <= 2; i++) {
        if (i == 1) {
            path[u] = 'N';
        }
        if (i == 2) {
            path[u] = 'Y';
        }
        dfs(u + 1);
    }
}

int main() {
    cin >> n;
    dfs(0);
    return 0;
}
