#include <stdio.h>

int main()
{
    double a;
    int z;
    double x;
    scanf("%lf",&a);
    z=a;
    x=a-z;
    //printf("%lf %d %lf",a,z,x);
    if(x>=0.5)
        z=z+1;
    printf("%d",z);
    return 0;

}
