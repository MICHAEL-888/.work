//
// Created by Michael on 2024/3/14.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cin.ignore();
    //getchar();
    vector<string> q(n);
    stack<long long> s;
    for (long long i = 0; i < n; i++) {
        getline(cin, q[i]);
    }
    for (long long i = 0; i < n; i++) {
        if (q[i][0] == 'p' && q[i][1] == 'u') {
            string temp;
            for (long long j = 5; j < q[i].length(); j++) {
                temp += q[i][j];
                //cout << temp;
            }
            s.push(stoi(temp));
        } else if (q[i][0] == 'q' && q[i][1] == 'u') {
            if (s.empty()) {
                cout << "Anguei!" << endl;
            } else {
                cout << s.top() << endl;
            }
        } else if (q[i][0] == 's' && q[i][1] == 'i') {
            cout << s.size() << endl;
        } else if (q[i][0] == 'p' && q[i][1] == 'o') {
            if (s.empty()) {
                cout << "Empty" << endl;
            } else {
                s.pop();
            }
        }

    }

}


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}