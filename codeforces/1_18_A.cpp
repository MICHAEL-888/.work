//
// Created by Michael on 2024/1/15.
//
#include <iostream>

using namespace std;

int main() {
    int n, t, count = 0;
    string a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        cin >> a >> b >> c;
        for (int j = 0; j < t; j++) {
            if (a[j] == c[j]) {
                count++;
            } else if (b[j] == c[j]) {
                count++;
            }
        }
        if (count == t) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        count = 0;
    }

}