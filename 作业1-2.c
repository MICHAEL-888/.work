#include <stdio.h>
int main()
{
    float r;
    float h;
    float v;
    scanf("%f",&r);
    scanf("%f",&h);
    v=(3.1415927*r*r*h)/3;
    printf("%.3f",v);
    return 0;
}
