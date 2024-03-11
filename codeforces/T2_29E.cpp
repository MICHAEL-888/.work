#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 定义比较函数
bool compareNum(string& s1, string& s2) {
    return s1 + s2 < s2 + s1;
}
// 主函数
int main() {
    int n;
    cin >> n;
    vector<string> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    // 使用自定义的比较函数进行排序
    sort(nums.begin(), nums.end(), compareNum);
    // 拼接排序后的数字串
    string result;
    for (string& num : nums) {
        result += num;
    }
    // 输出结果
    cout << result << endl;
    return 0;
}