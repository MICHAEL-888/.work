//
// Created by Michael on 2024/3/15.
//
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int fa[10000000];   //存储父节点
inline void init(int n) {
    for (int i = 1; i <= n; ++i)    //初始化每个元素父节点是自身
        fa[i] = i;
}

int find(int x) {   //递归方式查找根节点，根节点的标志就是父节点是本身
    if (x == fa[x])
        return x;
    else {
        fa[x] = find(fa[x]);  //压缩路径方式，父节点设为根节点
        return fa[x];         //返回父节点
    }
}

inline void merge(int i, int j) {   //合并将两个集合接在一起
    fa[find(i)] = find(j);
}