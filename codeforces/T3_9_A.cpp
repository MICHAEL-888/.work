//
// Created by Michael on 2024/3/9.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
int fa[1000001];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
    }
}

int find(int x) {
    if (fa[x] == x) return x;
    else return fa[x] = find(fa[x]);
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y)return;
    fa[x] = y;
}

map<string, int> map1;

int main() {
    int n, m;
    cin >> n >> m;
    init(n);
    int num = 1;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        map1[s] = num++;
    }

    string a, b;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        merge(map1[a], map1[b]);
    }
    int c;
    cin >> c;
    for (int i = 1; i <= c; i++) {
        string q, p;
        cin >> q >> p;
        if (find(map1[q]) == find(map1[p])) cout << "Yes." << endl;
        else cout << "No." << endl;
    }

    return 0;
}