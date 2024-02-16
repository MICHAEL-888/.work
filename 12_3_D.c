//
// Created by Michael on 2023/12/3.
//
#include <stdio.h>
int calc(int n);
int arr[10000][10000];
int narr[10000][10000];  //记得初始化！！！
int main(){
    int n,max=0,mi=0,mj=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            narr[i][j]=arr[i][j];   //arr为初始棋盘不能动！！！narr为变换后棋盘
        }
    }
    max=calc(n);
    mi=0;
    mj=0;
    int sum=0;
    for(int i=0;i<n;i=i+2){
        for(int j=0;j<n;j=j+2){   //选择第i行第j列进行变换
            for(int a=0;a<n;a++){   //0,0+0,0   1,0+0,1   2,0+0,2
                    narr[a][j]+=arr[i][a];
            }
            sum=calc(n);
            if(sum>max){
                max=sum;
                mi=i;
                mj=j;
            }

            for(int ii=0;ii<n;ii++){
                for(int jj=0;jj<n;jj++){
                    narr[ii][jj]=arr[ii][jj];   //重新初始化变换棋盘
                }
            }
        }
    }
    for(int i=1;i<n;i=i+3){
        for(int j=1;j<n;j=j+3){   //选择第i行第j列进行变换
            for(int a=0;a<n;a++){   //0,0+0,0   1,0+0,1   2,0+0,2
                narr[a][j]+=arr[i][a];
            }
            sum=calc(n);
            if(sum>max){
                max=sum;
                mi=i;
                mj=j;
            }

            for(int ii=0;ii<n;ii++){
                for(int jj=0;jj<n;jj++){
                    narr[ii][jj]=arr[ii][jj];   //重新初始化变换棋盘
                }
            }
        }
    }
    printf("%d",max);

    return 0;
}

int calc(int n){   //计算棋盘权值
    int val=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2==0){   //偶数为白色格子，加
                val+=narr[i][j];
            }
            else{   //奇数为黑色格子，减
                val-=narr[i][j];
            }
        }
    }
    return val;
}
