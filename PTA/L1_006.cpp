//
// Created by Michael on 2024/3/8.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    long long n, ans1 = 0, ans2 = 0, count = 0;
    cin >> n;
    map<long long, long long> m;
    for (long long i = 2; i <= (long long) sqrt(n) + 10; i++) {  //+10防止出错，+2出错了
        if (n % i == 0) {
            m[i]++;
        }
    }
    long long a = 0, b = 0;
    for (long long i = 2; i < m.size() + 1; i++) {
        if (m[i] == 1 && m[i - 1] == 0) {
            a = i;
            b = i;
        } else if (m[i] == 1 && m[i - 1] == 1) {
            b = i;
        } else if (m[i] == 0 && m[i - 1] == 1 && b - a + 1 > count) {
            ans1 = a;
            ans2 = b;
            count = b - a + 1;
        }
    }
    if (ans1 == 0 && ans2 == 0) {
        cout << 1 << endl;
        cout << n << endl;
    } else {
        cout << count << endl;
        for (long long i = ans1; i <= ans2; i++) {
            if (i != ans2) {
                cout << i << "*";
            } else {
                cout << i << endl;
            }
        }
    }

}