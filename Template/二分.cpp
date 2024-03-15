//
// Created by Michael on 2024/3/15.
//

//lower_bound/upper_bound进行二分查找时必须保证查找区间为升序序列！记得sort()
//lower_bound返回第一个大于或等于目标元素的元素地址，upper_bound返回第一个大于目标元素的元素地址
//第四个参数使用greater<type>()，大于变小于，type为数据类型如int

#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    long long index, val, n;    //val表示查找目标元素
    vector<int> q(n);
    sort(q.begin(), q.end());    //升序从小到大排序
    index = lower_bound(q.begin(), q.end(), val) - q.begin();
    if (index < n && q[index] == val) {
        cout << index << endl;  //输出数组元素下标
    } else {    //不存在情况分两种，第一种返回数组越界下标，第二种返回0，存在也可返回0
        cout << -1 << endl; //查找元素不存在
    }

}