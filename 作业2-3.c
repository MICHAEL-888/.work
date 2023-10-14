#include <stdio.h>
int main()
{
    int a;
    int b,s,g;
    scanf("%d",&a);
    b=a/100;
    s=a/10%10;
    g=a%10;
    //printf("%d %d %d",b,s,g);
    if(a==b*b*b+s*s*s+g*g*g) //=====================================
        printf("yes");
    else
        printf("no");

    return 0;
}
