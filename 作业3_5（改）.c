//
// Created by Michael on 2023/10/19.
//
#include <stdio.h>

int main() {
    int n;
    int man = -1, woman = -1, child;
    scanf("%d", &n);
    //printf("%d %d %d",man,woman,child);
    while (man < (n / 4)) {
        man++;
        //printf("%d %d %d\n",man,woman,child);
        while (woman < (n / 3)) {
            woman++;
            child = n - man - woman;
            //printf("man=%d woman=%d child=%d sum=%d n=%d\n", man, woman, child, man * 4 + woman * 3 + child / 2, n);
            if (man * 4 + woman * 3 + child / 2 == n && child % 2 == 0) {
                printf("%d %d %d\n",man,woman,child);
            }
        }
        woman = 0;//巨坑！！花了好多时间都没发现这个巨坑！！！导致第二次不会进入循环！！！
    }
    return 0;
}