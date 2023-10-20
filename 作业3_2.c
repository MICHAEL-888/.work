#include <stdio.h>

int main()
{
    float n,m;
    int y=0,b=0;
    int i;
    int max;
    float a1,a2;
    int ia1,ia2;
    scanf("%f %f",&n,&m);
    max=n>m?n:m;
    i=max;
    while(i>=1)
    {
        a1=n/i;
        a2=m/i;
        ia1=a1;
        ia2=a2;
        if(ia1==a1 && ia2==a2)
        {
            y=i;
            break;
        }
        //printf("a1=%f a2=%f ia1=%d ia2=%d y=%d i=%d\n",a1,a2,ia1,ia2,y,i);
        i=i-1;
    }

    i=2;
    while(i<=n*m)
    {
        a1=i/n;
        a2=i/m;
        ia1=a1;
        ia2=a2;
        //printf("a1=%f a2=%f ia1=%d ia2=%d i=%d\n",a1,a2,ia1,ia2,i);
        if(ia1==a1 && ia2==a2)
        {
            b=i;
            break;
        }
        i=i+1;
    }

    printf("%d %d",y,b);
    return 0;


}
