//
// Created by Michael on 2024/3/19.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> q(10);
    vector<int> arr;
    vector<int> index;
    for (int i = 0; i < s.length(); i++) {
        q[(int) (s[i] - 48)]++;
    }
    for (int i = 0; i < 10; i++) {
        if (q[i] != 0) {
            arr.push_back(i);
        }
    }
    sort(arr.begin(), arr.end(), greater<>());
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < arr.size(); j++) {
            if ((s[i] - 48) == arr[j]) {
                index.push_back(j);
            }
        }
    }
    cout << "int[] arr = new int[]{";
    for (int i = 0; i < arr.size(); i++) {
        if (i != arr.size() - 1) {
            cout << arr[i] << ",";
        } else {
            cout << arr[i] << "};" << endl;
        }
    }
    cout << "int[] index = new int[]{";
    for (int i = 0; i < index.size(); i++) {
        if (i != index.size() - 1) {
            cout << index[i] << ",";
        } else {
            cout << index[i] << "};";
        }
    }
    return 0;


}