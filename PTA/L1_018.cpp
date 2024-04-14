//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    int h, m, count = 0;
    scanf("%d:%d", &h, &m);
    if (h >= 0 && h < 12) {
        printf("Only %02d:%02d.  Too early to Dang.\n", h, m);
    } else if (h == 12 && m == 0) {
        printf("Only %02d:%02d.  Too early to Dang.\n", h, m);
    } else {
        count = h - 12;
        if (m != 0)
            count++;
    }
    for (int i = 0; i < count; i++) {
        cout << "Dang";
    }
}