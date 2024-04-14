//
// Created by Michael on 2024/3/26.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> tt(n);
    stack<int> q;
    stack<int> box;
    queue<int> sz;
    for (int i = 0; i < n; i++) {
        cin >> tt[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        q.push(tt[i]);
    }
    int count = 0;
    while (count != n) {
        if (box.empty()) {
            if (sz.empty() || q.top() <= sz.back()) {
                sz.push(q.top());
                count++;
                q.pop();
            } else {
                box.push(q.top());
                q.pop();
            }
        } else {
            if (sz.empty() || box.top() <= sz.back()) {
                sz.push(box.top());
                count++;
                box.pop();
            } else {
                if (q.empty()) {
                    while (!sz.empty()) {
                        if(sz.size()==1){
                            cout << sz.front();
                            sz.pop();
                        }else{
                            cout << sz.front() << " ";
                            sz.pop();
                        }
                    }
                    cout << endl;
                    continue;
                }
                if (sz.empty() || q.top() <= sz.back()) {
                    sz.push(q.top());
                    count++;
                    q.pop();
                } else {
                    if (box.size() == m) {
                        while (!sz.empty()) {
                            if(sz.size()==1){
                                cout << sz.front();
                                sz.pop();
                            }else{
                                cout << sz.front() << " ";
                                sz.pop();
                            }
                        }
                        cout << endl;
                        continue;
                    }
                    box.push(q.top());
                    q.pop();
                }
            }
        }
        if (sz.size() == k) {
            while (!sz.empty()) {
                if(sz.size()==1){
                    cout << sz.front();
                    sz.pop();
                }else{
                    cout << sz.front() << " ";
                    sz.pop();
                }
            }
            cout << endl;
        }
    }
    if (!sz.empty()) {
        while (!sz.empty()) {
            if(sz.size()==1){
                cout << sz.front();
                sz.pop();
            }else{
                cout << sz.front() << " ";
                sz.pop();
            }
        }
        cout << endl;
    }

}