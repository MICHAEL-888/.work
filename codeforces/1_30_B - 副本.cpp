//
// Created by Michael on 2024/1/30.
//
//
// Created by Michael on 2024/1/30.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int funcNXS(vector<int> q) {
    int nxs = 0;
    for (int i = 0; i < q.size(); i++) {
        for (int j = i + 1; j < q.size(); j++) {
            if (q[i] > q[j]) {
                nxs++;
            }
        }
    }
    return nxs;
}

void solve() {
    int n, NXS1, NXS2, NXS;
    cin >> n;
    vector<int> q1;
    vector<int> q2;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        q2.push_back(temp);
    }
    NXS1 = funcNXS(q1);
    NXS2 = funcNXS(q2);
    if (NXS1 <= NXS2) {
        NXS = NXS2;
    } else {
        NXS = NXS1;
    }
    if (NXS1 == 0) {
        int count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q1[i] < q1[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q1[i];
                    q1[i] = q1[i + 1];
                    q1[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }
        count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q2[i] > q2[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q2[i];
                    q2[i] = q2[i + 1];
                    q2[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }

    } else if (NXS2 == 0) {
        int count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q1[i] > q1[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q1[i];
                    q1[i] = q1[i + 1];
                    q1[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }
        count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q2[i] < q2[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q2[i];
                    q2[i] = q2[i + 1];
                    q2[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }
    } else if (NXS1 == NXS2) {
        int count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q1[i] > q1[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q1[i];
                    q1[i] = q1[i + 1];
                    q1[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }
        count = 0;
        while (count < NXS1 - 1) {
            for (int i = 0; i < n; i++) {
                if (q2[i] > q2[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q2[i];
                    q2[i] = q2[i + 1];
                    q2[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }

    } else if (NXS == NXS1) {//数组1逆序数大
        int count = 0;
        while (count < NXS2 - 1) {
            for (int i = 0; i < n; i++) {
                if (q1[i] > q1[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q1[i];
                    q1[i] = q1[i + 1];
                    q1[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }

        count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q1[i] > q1[i + 1]) {//交换位置逆序数-1
                    int temp;
                    temp = q1[i];
                    q1[i] = q1[i + 1];
                    q1[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }

    } else {
        int count = 0;
        while (count < NXS1 - 1) {
            for (int i = 0; i < n; i++) {
                if (q2[i] > q2[i + 1]) {//q2逆序数-1
                    int temp;
                    temp = q2[i];
                    q2[i] = q2[i + 1];
                    q2[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }

        count = 0;
        while (count < 1) {
            for (int i = 0; i < n; i++) {
                if (q1[i] < q1[i + 1]) {
                    int temp;
                    temp = q1[i];
                    q1[i] = q1[i + 1];
                    q1[i + 1] = temp;
                    count++;
                    break;
                }
            }
        }

    }
    for (int &p: q1) {
        cout << p << " ";
    }
    cout << endl;
    for (int &p: q2) {
        cout << p << " ";
    }
    cout << endl;


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