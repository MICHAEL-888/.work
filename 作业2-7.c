#include <stdio.h>

int main()
{
    int h, m, s;
    char x[5];
    char y[5];
    char z[5];
    scanf("%d:%d:%d", &h, &m, &s);
    s = s + 1;
    if (s == 60)
    {
        s = 0;
        m = m + 1;
        z[0]="0";
        z[0]="0";
        if (m == 60)
        {
            m = 0;
            h = h + 1;
            y[0]="0";
            y[0]="0";
            if (h == 24)
            {
                h = 0;
                x[0]="0";
                x[1]="0";

            }
        }
    }
    if (h < 10)
    {
        //a[1] = h;
        sprintf(x,"0%d",h);

    }
    else
    {
        //a[0] = h / 10;
        //a[1] = h % 10;
        //sprintf(a[0],"%d",h);
        sprintf(x,"%d",h);
    }
    if (m < 10)
    {
        //a[4] = m;
        sprintf(y,"0%d",m);
    }
    else
    {
        //a[3] = m / 10;
        //a[4] = m % 10;
        //sprintf(y,"%d",m);
        sprintf(y,"%d",m);
    }
    if (s < 10)
    {
        //a[7] = s;
        sprintf(z,"0%d",s);
    }
    else
    {
        //a[6] = s / 10;
        //a[7] = s % 10;
        //sprintf(z,"%d",s);
        sprintf(z,"%d",s);
    }
    printf("%s:%s:%s", x,y,z);

    return 0;
}