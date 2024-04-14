//
// Created by Michael on 2024/3/19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> q1(n);
    vector<string> q2(n);
    for (int i = 0; i < n; i++) {
        cin >> q1[i] >> q2[i];
    }
    for (int i = 0; i < q2.size() / 2; i++) {
        if (q1[i] == 0) {
            for (int j = q2.size() - 1; j > 0; j--) {
                if (q1[j] == 1) {
                    cout << q2[i] << " " << q2[j] << endl;
                    q2.erase(q2.begin() + j);
                    q2.erase(q2.begin() + i);
                    i--;
                    break;
                }
            }
        } else {
            for (int j = q2.size() - 1; j > 0; j--) {
                if (q1[j] == 0) {
                    cout << q2[i] << " " << q2[j] << endl;
                    q2.erase(q2.begin() + j);
                    q2.erase(q2.begin() + i);
                    i--;
                    break;
                }
            }
        }

    }
}