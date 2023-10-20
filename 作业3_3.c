#include <stdio.h>
int main()
{
    int n;
    int max=0,min=99999;
    int i=0;
    scanf("%d",&n);
    int num[n];
    while(i<n)
    {
        scanf("%d",&num[i]);
        //printf("%d",num[i]);
        if(num[i]>max)
            max=num[i];
        if(num[i]<min)
            min=num[i];
        i++;
    }
    printf("%d %d",max,min);
    return 0;
}
