#include <stdio.h>
int main()
{
    int n1;
    float n2;
    int m[9999],w[9999],c[9999],t[9999];
    int i1=0,i2=0,i3=0,i4=0;
    scanf("%d",&n1);
    while(i1<=n1/4)
    {
        m[i1]=i1;
        //printf("%d %d",m[i1],i1);
        n2=n1-m[i1]*4;
        //printf("m=%d w=%d c=%d i1=%d i2=%d i3=%d n1=%d n2=%f t=%d\n",m[i1],w[i2],c[i3],i1,i2,i3,n1,n2,t[i4]);
        i1++;
        while(i2<=n1/3)
        {
            w[i2]=i2;
            n2=n2-w[i2]*3;
            //printf("m=%d w=%d c=%d i1=%d i2=%d i3=%d n1=%d n2=%f t=%d\n",m[i1],w[i2],c[i3],i1,i2,i3,n1,n2,t[i4]);
            i2++;
            while(i3<=n1*2)
            {
                c[i3]=n2*2;
                if(c[i3]==n2*2)
                {
                    t[i4]=1;
                    printf("m=%d w=%d c=%d i1=%d i2=%d i3=%d n1=%d n2=%f t=%d\n",m[i1],w[i2],c[i3],i1,i2,i3,n1,n2,t[i4]);
                    i4++;
                }
                else
                {
                    t[i4]=0;
                    printf("m=%d w=%d c=%d i1=%d i2=%d i3=%d n1=%d n2=%f t=%d\n",m[i1],w[i2],c[i3],i1,i2,i3,n1,n2,t[i4]);
                    i4++;
                }
                i3++;
            }
        }
    }
    return 0;
}
