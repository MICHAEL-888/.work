#include <iostream>
#include <vector>
#include <climits> // 包含INT_MIN的头文件

using namespace std;

// 函数用于计算任意4x4子矩阵的和
int maxSumSubmatrix(const vector<vector<int>> &matrix, int k) {
    int maxSum = INT_MIN; // 存储最大和，初始值设为整型的最小值
    int tempSum; // 存储当前子矩阵的和
    // 遍历每一个可能的4x4子矩阵的起始点(i, j)
    for (int i = 0; i <= matrix.size() - k; ++i) {
        for (int j = 0; j <= matrix[0].size() - k; ++j) {
            tempSum = 0; // 每次开始新的子矩阵和的计算前将临时和重置为0
            // 计算当前子矩阵的和
            for (int p = i; p < i + k; ++p) {
                for (int q = j; q < j + k; ++q) {
                    tempSum += matrix[p][q];
                }
            }
            // 更新最大和
            maxSum = max(maxSum, tempSum);
        }
    }
    return maxSum; // 返回最大和
}

int main() {
    const int n = 21; // 矩阵大小
    const int k = 4;  // 子矩阵大小
    vector<vector<int>> matrix(n, vector<int>(n)); // 创建21x21的矩阵
    // 读取矩阵的值，这里需要你输入或者预先定义矩阵的值
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = temp[j] - '0';
        }
    }
    // 调用函数并输出最大的4x4子矩阵和
    cout << maxSumSubmatrix(matrix, k) << endl;
    return 0;
}
