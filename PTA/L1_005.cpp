//
// Created by Michael on 2024/3/8.
//
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    unordered_map<long long, long long> m1;
    unordered_map<long long, long long> m2;
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long temp1, temp2, temp3;
        cin >> temp1 >> temp2 >> temp3;
        m1[temp2] = temp1;
        m2[temp2] = temp3;
    }
    cin >> n;
    vector<long long> ans(1001);
    for (long long i = 0; i < n; i++) {
        cin >> ans[i];
    }
    for (long long i = 0; i < n; i++) {
        cout << m1[ans[i]] << " " << m2[ans[i]] << endl;
    }
    return 0;

}