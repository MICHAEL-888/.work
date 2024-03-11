//
// Created by Michael on 2024/2/29.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == m) {
        cout << "F is not emo today" << endl;
    } else if (n < m) {
        cout << "F is fine now" << endl;
    } else if (n > m) {
        for (int i = 0; i < n; i++) {
            cout << "shou bu liao la";
            if (i != n - 1) {
                cout << " ";
            } else {
                cout << "!";
            }
        }
    }
    return 0;
}
