//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    bool flaga = 1, flagb = 1;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] < 48 || a[i] > 57) {
            flaga = 0;
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (a[i] < 48 || a[i] > 57) {
            flagb = 0;
        }
    }
    if (flaga == 0 || stoi(a) < 1 || stoi(a) > 1000) {
        a = "?";
    }
    if (flagb == 0 || stoi(b) < 1 || stoi(b) > 1000) {
        b = "?";
    }
    if (a != "?" && b != "?") {
        cout << a << " + " << b << " = " << stoi(a) + stoi(b);
    } else if (a != "?" && b == "?") {
        cout << stoi(a) << " + " << b << " = " << "?";
    } else if (a == "?" && b != "?") {
        cout << a << " + " << stoi(b) << " = " << "?";
    } else {
        cout << a << " + " << b << " = " << "?";
    }
    return 0;
}