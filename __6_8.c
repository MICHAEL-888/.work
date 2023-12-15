#include <stdio.h>
#include <string.h>
//int intlen(int n);
int main()
{
    int n,i,j,max=0,min=0,calc=0,count1=0,count2=0;
    scanf("%d",&n);
    int list[n*n];
    for(i=0;i<n*n;i++)
    {
        scanf("%d",&list[i]);
    }
    for(i=0;i<n*n;i++)
    {
        for(j=0,count1=0,count2=0;j<n*n;j++)
        {
            if(list[i]>=list[j])
            {
                count1++;
            }
            if(list[i]<=list[j])
            {
                count2++;
            }

        }
        if(count1==n*n)
            max=list[i];
        if(count2==n*n)
            min=list[i];
    }
    for(i=0;i<n*n;i++)
    {
        calc+=list[i];
    }


    for(i=1;i<=n;i++)
    {
        if(i==1)//�����һ��
        {
            for(j=0;j<n;j++)
            {
                printf("%5d",min);
            }
            printf("\n");
        }
        else if(i==n/2+1)//�м���
        {
            printf("%5d",min);
            for(j=2;j<n;j++)
            {
                if(j==n/2+1)
                {
                    printf("%5d",max);
                }
                else
                {
                    printf("%5d",calc);
                }
            }
            printf("%5d",min);
            printf("\n");
        }
        else if(i==n)//���һ��
        {
            for(j=0;j<n;j++)
            {
                printf("%5d",min);
            }
            printf("\n");
        }
        else  //������
        {
            printf("%5d",min);
            for(j=1;j<n-1;j++)
            {
                printf("%5d",calc);
            }
            printf("%5d",min);
            printf("\n");
        }
    }




    return 0;
}

/*
int intlen(int n)
{
    char str[65530];
    sprintf(str,"%d",n);
    return strlen(str);
}
*/

