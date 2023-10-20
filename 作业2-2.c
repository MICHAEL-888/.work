#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    max = a > b ? a : b;

    if (max == a) {
        max = a > c ? a : c;
    } else {
        max = b > c ? b : c;
        //printf("%d ",max);
    }

    min = a < b ? a : b;

    if (min == a) {
        min = a < c ? a : c;
//printf("a%d",max);
    } else
        min = b < c ? b : c;
    printf("%d %d", max, min);

    return 0;
}
