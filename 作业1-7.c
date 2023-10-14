#include <stdio.h>
int main()
{
    int a;
    int b;
    int s;
    int g;
    int result;
    scanf("%d",&a);
    if(a<0)
        a=-a;
    b=a/100;
    s=(a-b*100)/10;
    g=a-b*100-s*10;
    result=g*100+s*10+b;
    printf("%d",result);
    return 0;
}
