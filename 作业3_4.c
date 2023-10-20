#include <stdio.h>
int main()
{
    int i=0;
    int m,n;
    int x=0,y=0;
    scanf("%d %d",&m,&n);
    int num[n-m+1];
    //printf("%d",n);
    while(i<n-m+1)
    {
        num[i]=m+i;
        //printf("i=%d\n",i);
        //printf("%d %d %d\n",num[i],x,y);
        if(num[i]%2==0)
            x=x+num[i]*num[i];
        else
            y=y+num[i]*num[i]*num[i];
        i++;
    }
    printf("%d %d",x,y);
    return 0;
}
