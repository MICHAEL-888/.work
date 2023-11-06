//
// Created by Michael on 2023/11/6.
//
#include <stdio.h>

int main() {
    int n, i, i2 = 0, i3 = 0, sum = 0, pre = 65535, min;
    scanf("%d", &n);
    int a[n], odd[65535], even[65535];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            odd[i2] = a[i];
            if (odd[i2] < pre) {
                min = odd[i2];
            }
            pre = odd[i2];
            i2++;
        } else {
            even[i3] = a[i];    //不用写这里，懒得删掉
            i3++;
        }
    }
    //分奇偶没问题

    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    if (i2 % 2 != 0)//流程问题修改
        sum = sum - min;
    printf("%d", sum);

    return 0;

}