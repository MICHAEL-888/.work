#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string input;
    int k;
    // 读取整个行为字符串以及数字k
    getline(cin, input);
    cin >> k;
    // 移除字符串中的非数字字符
    for (auto &ch : input) {
        if (ch == '[' || ch == ']' || ch == ',') {
            ch = ' ';
        }
    }
    // 用stringstream从处理过的字符串中读取数字
    stringstream ss(input);
    int num;
    vector<vector<int>> matrix;
    vector<int> row;
    while (ss >> num) {
        row.push_back(num);
        if (ss.peek() == ' ') {
            matrix.push_back(row);
            row.clear();
        }
    }
    if (!row.empty()) matrix.push_back(row); // 添加最后一行
    // 输出行数、列数和数字k
    cout << matrix.size() << " " << matrix[0].size() << " " << k << endl;
    // 输出二维数组的内容
    for (const auto &row : matrix) {
        for (int i = 0; i < row.size(); ++i) {
            cout << row[i];
            if (i < row.size() - 1) cout << " "; // 在数字间加空格
        }
        cout << endl; // 每一行结束后换行
    }
    return 0;
}