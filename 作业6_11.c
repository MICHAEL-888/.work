#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int t;
    scanf("%d",&t);
    int b[t][4];
    int i1,j1,i2,j2,sum;
    for(i1=0;i1<n;i1++){
        for(j1=0;j1<m;j1++){
            a[i1][j1]=0;
        }
    }
    for(i1=0;i1<t;i1++){
        for(j1=0;j1<4;j1++){
            scanf("%d",&b[i1][j1]);
        }
    }
    for(i1=0;i1<t;i1++){
        if(b[i1][0]==1){
            //scanf("%d %d %d",&row,&l,&r);
            for(i2=b[i1][2],sum=0;i2<=b[i1][3];i2++){
                sum=sum+a[b[i1][1]][i2];
            }
            printf("%d\n",sum);
        }
        else{
            //int x,y,k;
            //scanf("%d %d %d",&x,&y,&k);
            a[b[i1][1]][b[i1][2]]=b[i1][3];
            for(i2=0;i2<n;i2++){
                for(j2=0;j2<m;j2++){
                    printf("%d ",a[i2][j2]);
                }
                printf("\n");
            }
        }

    }
    return 0;

}