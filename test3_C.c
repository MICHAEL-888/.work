//
// Created by Michael on 2023/11/6.
//
#include <stdio.h>

int main() {
    int a, i, j, judge = 0;
    scanf("%d", &a);
    int num[a][a];
    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            scanf("%d", &num[i][j]);
        }

    }
    //录入数组没有问题

    for (i = 0; i < a; i++) {
        for (j = 0; j < i; j++) {
            if (num[i][j] != 0) {
                judge = 1;
                break;
            }
        }
    }
    if (judge)
        printf("NO\n");
    else
        printf("YES\n");


    return 0;
}