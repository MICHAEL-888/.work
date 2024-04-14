//
// Created by Michael on 2024/3/26.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> q(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            q[i].push_back(temp);
        }
    }
    map<vector<int>, int> ma;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (q[i] == q[j]) {
                ma[q[i]]++;
            }
        }
    }
    for (auto &p: ma) {
        p.second = (int) sqrt(p.second);
    }


    cout << ma.size() << endl;
    for (int i = 10000; i >= 0; i--) {
        for (auto p = ma.rbegin(); p != ma.rend(); p++) {
            if (p->second == i) {
                for (auto pp = ma.begin(); pp != ma.end(); pp++) {
                    if (pp->second == i) {
                        cout << pp->second << " ";
                        for (int j = 0; j < pp->first.size(); j++) {
                            if (j != pp->first.size() - 1) {
                                cout << pp->first[j] << " ";
                            } else {
                                cout << pp->first[j];
                            }
                        }
                        cout << endl;
                    }
                }
                break;
            }
        }

    }


    return 0;
}