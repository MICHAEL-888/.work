//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int j = 0; j < b - a + 1; j++) {
        if (count < 5) {
            cout << right << setw(5) << a + j;
            if (count == 4) {
                if (count != b - a) {
                    cout << endl;
                }
                count = 0;
                continue;
            }
            count++;
        }

    }
    cout << endl << "Sum = " << (a + b) * (b - a + 1) / 2;
}