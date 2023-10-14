#include <stdio.h>
int main()
{
    int d,h,m,result;
    scanf("%d",&d);
    scanf("%d",&h);
    scanf("%d",&m);
    result=d*24*60+h*60+m;
    printf("%d",result);
    return 0;

}
