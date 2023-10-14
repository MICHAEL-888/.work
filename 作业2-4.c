#include <stdio.h>
int main()
{
    double a,b,c;
    double max,s1,s2;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if(a+b>c)
    {
        max=a>b?a:b;
        if(max==a)
        {
            max=a>c?a:c;
            if(max==a)
            {
                s1=b;
                s2=c;
            }

            else
            {
                s1=a;
                s2=b;
            }

        }

        else

        max=b>c?b:c;

        if(max==b)
        {
            s1=a;
            s2=c;
        }

        else
        {
            s1=a;
            s2=b;
        }


        if(max*max==s1*s1+s2*s2)
            printf("1");
        else
            printf("0");
    }

    else
        printf("-1");
    return 0;
}
