#include <stdio.h>
int main(){
    int n=0,i=0,j;
    scanf("%d",&n);
    int list[n][4];
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            scanf("%d",&list[i][j]);
        }
    }
    int map[999][999];
    for(i=0;i<999;i++){
        for(j=0;j<999;j++){
            map[i][j]=0;   //初始化棋盘所有项目为0
        }
    }
    int i2,i20,j2,j20;
    for(i=0;i<n;i++){
        //printf("%d %d %d %d",i2,i20,j2,j20);
        for(i2=list[i][0],i20=list[i][2];i2<i20;i2++){
            for(j2=list[i][1],j20=list[i][3];j2<j20;j2++){
                map[i2][j2]=1;
                //printf("%d %d\n",i2,j2);
            }
        }
    }
    int count=0;
        for(i=0;i<999;i++){
            for(j=0;j<999;j++){
                if(map[i][j]){
                    count++;
                }

            }
        }
        printf("%d\n",count);
    return 0;
}