//
// Created by Michael on 2024/1/16.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i, h;
    char f;
    cin >> n >> f;
    //h = (int) (sqrt(n - 1) / 2);
    int sum = 0;
    for (i = 0; sum * 2 - 1 < n; i++) {
        sum += 2 * i + 1;
    }
    h = i / 2;
    for (int j = h; j > 0; j--) {
        for (int k = 0; k < h - j; k++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << f;
        }
        cout << endl;
    }
    for (int k = 0; k < h; k++) {
        cout << " ";
    }
    cout << f << endl;
    for (int j = 0; j < (i - 1) / 2; j++) {
        for (int k = 0; k < h - j - 1; k++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * (i + 1) + 1; k++) {
            cout << f;
        }
        cout << endl;
    }
    cout << n - (2 * (i - 1) + 1) << endl;

}