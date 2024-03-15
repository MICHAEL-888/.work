//
// Created by Michael on 2024/3/12.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string n;
    cin >> n;
    vector<string> q = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < n.size(); i++) {
        if (i == 0 && n[0] == '-') {
            cout << "fu ";
            continue;
        }
        if (i != n.size() - 1) {
            cout << q[(int) n[i] - 48] << " ";
        } else {
            cout << q[(int) n[i] - 48];
        }

    }

}