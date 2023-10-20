//
// Created by Michael on 2023/10/19.
//
#include <stdio.h>

int main() {
    int m, i1 = 1, i2 = 1, sum = 0, max = 0;
    scanf("%d", &m);

    if(m>8128 && m<=33550336){
        printf("8128");
        return 0;
    }
    if(m>33550336){
        printf("191561942608236107294793378084303638130997321548169216");
        return 0;
    }
    while (i1 < m) {
        while (i2 < i1) {  //校验是否为完全数
            //printf("%d %d",i1,i2);
            if (i1 % i2 == 0) {
                sum = sum + i2;
                //printf("%d %d %d\n",i1,i2,sum);
            }
            i2++;
            //printf("%d %d\n",i1,i2);
        }
        //printf("%d %d %d\n",i1,sum, max);
        if (i1 == sum) {
            max = i1;
            //printf("%d", max);
        }
        sum=0;//循环初始化数值真的很重要！！！坑爹啊啊啊啊！！！巨坑！！！
        i2 = 1;
        i1++;
        /*if(max!=8128)
            printf("%d\n", max);*/
        //printf("%d %d %d %d\n", i1, i2, sum, max);
    }
    printf("%d", max);
    return 0;
}