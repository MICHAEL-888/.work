//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> q;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            string temp;
            cin >> temp;
            if (k > 1) {
                q.push_back(temp);
            }
        }
    }
    int m;
    cin >> m;
    bool flag = 1, flag2 = 1;
    map<string, int> ma;
    for (int i = 0; i < m; i++) {
        string cc;
        cin >> cc;
        if (find(q.begin(), q.end(), cc) == q.end() && ma[cc] == 0) {
            if (i != 0) {
                cout << " " << cc;
            } else {
                cout << cc;
            }

            ma[cc]++;
            flag = 0;
        }
    }
    //cout << endl;

    if (flag) {
        cout << "No one is handsome" << endl;
    }
}