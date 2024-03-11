//
// Created by Michael on 2024/1/16.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int n, rem = 0, row = 0;
    char s;
    cin >> n >> s;
    if (n < 7) {
        cout << s << endl;
        cout << n - 1 << endl;
        return 0;
    }
    rem = n;
    for (int i = 6; rem >= i; i += 4) {
        if (i == 6) {
            rem -= 1;
        }
        rem -= i;
        row++;
    }
    //row=(int)pow(row,2);//排除中间那一行
    int qq = 0;
    for (int i = row; i >= 0; i--) {
        for (int cc = 0; cc < qq; cc++) {
            if (qq == 0) {
                break;
            }
            cout << " ";
        }
        qq++;
        for (int j = 0; j < 2 * (i + 1) - 1; j++) {
            cout << s;
        }
        cout << endl;
    }
    qq = row - 1;
    for (int i = 1; i <= row; i++) {
        for (int cc = 0; cc < qq; cc++) {
            if (qq == 0) {
                break;
            }
            cout << " ";
        }
        qq--;
        for (int j = 0; j < 2 * (i + 1) - 1; j++) {
            cout << s;
        }
        cout << endl;
    }
    cout << rem << endl;

}