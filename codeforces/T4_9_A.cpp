//
// Created by Michael on 2024/4/9.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int x, ans = 0;
    string s;
    cin >> x >> s;
    vector<int> q;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            q.push_back(s[i] - 55);
        } else {
            q.push_back(s[i] - 48);
        }
    }
    for (int i = 0; i < q.size(); i++) {
        ans += q[i] * pow(x, q.size() - i - 1);
    }
    cout << ans;
    return 0;
}