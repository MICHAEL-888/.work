#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3;
    int n,i;
    i=2;
    a1=1;
    a2=1;
    a3=0;
    scanf("%d",&n);
    if(n==1 || n==2)
    {
        printf("1");
        exit(-1);

    }
    while(i<n)
    {
        a3=a2;
        a2=a1;
        a1=a2+a3;
        i=i+1;
    }
    printf("%d",a1);
    return 0;
}
