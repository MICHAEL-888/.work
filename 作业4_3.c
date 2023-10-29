//
// Created by Michael on 2023/10/29.
//
#include <stdio.h>

int main() {
    int a, b, i, ii, q;
    int num[100];
    int total = 0;
    scanf("%d %d", &a, &b);
    //取各位到数列，num[4,6,2,2,6]  i=4,3,2,1,0
    for (i = 0, q = 10; i < a; i++) {
        num[i] = a % q;
        a = a - num[i];
        num[i] = num[i] * 10 / q;
        q = q * 10;
        //printf("numi=%d a=%d q=%d i=%d\n",num[i],a,q,i);
    }
    for (ii = 0; ii < i; ii++) {
        //printf("numi=%d b=%d\n",num[ii],b);
        if (num[ii] == b) {
            total++;
        }
    }
    printf("%d", total);
    return 0;
}