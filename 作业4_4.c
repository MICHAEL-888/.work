//
// Created by Michael on 2023/10/29.
//
#include <stdio.h>

int main() {
    int n, zf, i, num[100], q, ii, output = 0;
    scanf("%d", &n);

    if (n < 0) {
        zf = 1;               //判断正负
        n = n - n - n;
    } else
        zf = 0;

    for (i = 0, q = 10; i < n; i++) {
        num[i] = n % q;
        n = n - num[i];
        num[i] = num[i] * 10 / q;         //读取到数组
        q = q * 10;
        //printf("numi=%d q=%d\n",num[i],q);
    }

    for (ii = i - 1, q = 1; ii >= 0; ii--) {
        output = output + num[ii] * q;
        //printf("%d %d %d\n", num[ii], ii, q);       //倒序读取数组
        q = q * 10;
    }

    if (zf == 1)
        output = output - output - output;    // 加负号
    printf("%d", output);

    return 0;

}