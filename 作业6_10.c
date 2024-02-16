#include <stdio.h>
int main(){
    int n1,n2,i1,j1,i2,j2;
    scanf("%d",&n1);
    int list1[n1][n1];
    for(i1=0;i1<n1;i1++){
        for(j1=0;j1<n1;j1++){
            scanf("%d",&list1[i1][j1]);
        }
    }
    scanf("%d",&n2);
    int list2[n2][n2];
    for(i2=0;i2<n2;i2++){
        for(j2=0;j2<n2;j2++){
            scanf("%d",&list2[i2][j2]);
        }
    }
    //以上部分录入矩阵到数组
    //以下部分开始遍历
    int count=0;
    for(i1=0;i1<=n1-n2;i1++){
        for(j1=0;j1<=n1-n2;j1++){
            if(list1[i1][j1]==list2[0][0]){
                for(i2=0,count=0;i2<n2;i2++){
                    for(j2=0;j2<n2;j2++){
                        if(list1[i1+i2][j1+j2]==list2[i2][j2]){
                            count++;

                        }
                    }
                }
                if(count==n2*n2){
                    printf("%d,%d",i1+1,j1+1);
                    return 0;
                }
            }
        }
    }
    printf("%d",-1);
    return 0;
}

