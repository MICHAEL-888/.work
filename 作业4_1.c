//
// Created by Michael on 2023/10/29.
//
#include <stdio.h>

int main() {
    int a = 0, i = 0, www = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        if (((float) a / 2.0) == (a / 2)) {
            www = 0;
        } else {
            www = 1;
        }
    }
    if (www == 0 || a == 1) {
        printf("not prime");
    } else {
        printf("prime");
    }
    return 0;
}