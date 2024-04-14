//
// Created by Michael on 2024/4/9.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int x, y;
    x = n * 3 + n - 1;
    y = 5;
    int posx = 0, posy = 0;
    char c[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            c[i][j] = '.';
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx][posy + 1] = 'X';
            c[posx + 2][posy + 1] = 'X';

            c[posx][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx][posy + 3] = 'X';
            c[posx + 2][posy + 3] = 'X';

            c[posx][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;

        } else if (s[i] == '1') {
            c[posx + 2][posy + 0] = 'X';
            c[posx + 2][posy + 1] = 'X';
            c[posx + 2][posy + 2] = 'X';
            c[posx + 2][posy + 3] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '2') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx + 2][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 0][posy + 3] = 'X';

            c[posx + 0][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '3') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx + 2][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 2][posy + 3] = 'X';

            c[posx + 0][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '4') {
            c[posx][posy + 0] = 'X';
            c[posx + 2][posy + 0] = 'X';

            c[posx][posy + 1] = 'X';
            c[posx + 2][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 2][posy + 3] = 'X';

            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '5') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx + 0][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 2][posy + 3] = 'X';

            c[posx + 0][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '6') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx + 0][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 0][posy + 3] = 'X';
            c[posx + 2][posy + 3] = 'X';

            c[posx + 0][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '7') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';
            c[posx + 2][posy + 1] = 'X';
            c[posx + 2][posy + 2] = 'X';
            c[posx + 2][posy + 3] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '8') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx + 0][posy + 1] = 'X';
            c[posx + 2][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 0][posy + 3] = 'X';
            c[posx + 2][posy + 3] = 'X';

            c[posx + 0][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        } else if (s[i] == '9') {
            c[posx + 0][posy] = 'X';
            c[posx + 1][posy] = 'X';
            c[posx + 2][posy] = 'X';

            c[posx + 0][posy + 1] = 'X';
            c[posx + 2][posy + 1] = 'X';

            c[posx + 0][posy + 2] = 'X';
            c[posx + 1][posy + 2] = 'X';
            c[posx + 2][posy + 2] = 'X';

            c[posx + 2][posy + 3] = 'X';

            c[posx + 0][posy + 4] = 'X';
            c[posx + 1][posy + 4] = 'X';
            c[posx + 2][posy + 4] = 'X';

            posx += 4;
        }
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << c[j][i];
        }
        if (i != 4) {
            cout << endl;
        }
    }
}