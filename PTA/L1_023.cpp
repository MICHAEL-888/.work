//
// Created by Michael on 2024/3/18.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> ma;
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        //cout << s[i];
        ma[s[i]]++;
    }
    while (ma['G'] != 0 || ma['P'] != 0 || ma['L'] != 0 || ma['T'] != 0) {
        if (ma['G'] != 0) {
            ma['G']--;
            cout << 'G';
        }
        if (ma['P'] != 0) {
            ma['P']--;
            cout << 'P';
        }
        if (ma['L'] != 0) {
            ma['L']--;
            cout << 'L';
        }
        if (ma['T'] != 0) {
            ma['T']--;
            cout << 'T';
        }
    }
    return 0;

}