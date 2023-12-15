//
// Created by Michael on 2023/11/1.
//
#include <stdio.h>
int main(){
    int n,i,j,pre=100,num,i2=0,bk0,bk1,bk2;
    scanf("%d",&n);
    int a[n][3],b[n][3];
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(num=0;num<n;num++){
        for(i=0;i<n;i++){
            if(a[num][0]<a[i][0]){    //num表示某一行遍历原数列进行比较
                b[i2][0]=a[num][0];   //i2记为输出数列的序号
                b[i2][1]=a[num][1];
                b[i2][2]=a[num][2];
                bk0=a[num][0];
                bk1=a[num][1];
                bk2=a[num][2];
                a[num][0]=99;
                a[num][1]=99;
                a[num][2]=99;
                i2++;
                }
            else if(a[num][0]>a[i][0]){
                b[i2][0]=0;   //i2记为输出数列的序号
                b[i2][1]=0;
                b[i2][2]=0;
                a[num][0]=bk0;
                a[num][1]=bk1;
                a[num][2]=bk2;
                i2--;
            }
            else if(a[num][0]==a[i][0]){
                if(a[num][1]<a[i][1]){    //小时位相等后比较分钟位
                    b[i2][0]=a[num][0];   //i2记为输出数列的序号
                    b[i2][1]=a[num][1];
                    b[i2][2]=a[num][2];
                    bk0=a[num][0];
                    bk1=a[num][1];
                    bk2=a[num][2];
                    a[num][0]=99;
                    a[num][1]=99;
                    a[num][2]=99;
                    i2++;
                }
                else if(a[num][1]>a[i][1]){
                    b[i2][0]=0;   //i2记为输出数列的序号
                    b[i2][1]=0;
                    b[i2][2]=0;
                    a[num][0]=bk0;
                    a[num][1]=bk1;
                    a[num][2]=bk2;
                    i2--;
                }
                else if(a[num][1]==a[i][1]){
                    if(a[num][2]>a[i][2]){   //分钟位相等后比较秒针位
                        b[i2][0]=a[num][0];   //i2记为输出数列的序号
                        b[i2][1]=a[num][1];
                        b[i2][2]=a[num][2];
                        bk0=a[num][0];
                        bk1=a[num][1];
                        bk2=a[num][2];
                        a[num][0]=99;
                        a[num][1]=99;
                        a[num][2]=99;
                        i2++;
                    }
                    else if(a[num][2]<a[i][2]){
                        b[i2][0]=0;   //i2记为输出数列的序号
                        b[i2][1]=0;
                        b[i2][2]=0;
                        a[num][0]=bk0;
                        a[num][1]=bk1;
                        a[num][2]=bk2;
                        i2--;
                    }
                    else if(a[num][2]==a[i][2]){
                        b[i2][0]=a[num][0];   //i2记为输出数列的序号
                        b[i2][1]=a[num][1];
                        b[i2][2]=a[num][2];
                        bk0=a[num][0];
                        bk1=a[num][1];
                        bk2=a[num][2];
                        a[num][0]=99;
                        a[num][1]=99;
                        a[num][2]=99;
                        i2++;
                    }
                }
            }
        }

    }
    return 0;
}