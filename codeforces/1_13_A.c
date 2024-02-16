//
// Created by Michael on 2024/1/13.
//
#include <stdio.h>
int qq(int n);
int main(){
        int t;
        int a1=0,a2=0,a3=0;
        int x1[101];
        int x2[101];
        int x3[101];
        int out[501];
        scanf ("%d",&t);
        for(int i=0;i<=t;i++){    //一组数中
            int count =0;
            int n,tempa,tempx;
            int max1=-1,min2=2000000000;
            int arr[101];
            scanf("%d",&n);
            for(int j=0;j<n;j++){
                count=0;
                scanf("%d %d",&tempa,&tempx);
                if(tempa==1 && tempx>=max1){
                    max1=tempx;
                } else if(tempa==2 && tempx<=min2){
                    min2=tempx;
                } else if(tempa==3){
                    x3[a3]=tempx;
                    a3++;
                }
            }   // 录入数据
            for(int j=0;j<a3;j++){
                if(x3[j]>=max1 && x3[j]<=min2){
                    count++;
                }
            }
            //printf("max1=%dmin2=%dcount=%da3=%d\n",max1,min2,count,a3);
            if(min2-max1+1-count<=0){
                printf("0\n");
            }else{
                printf("%d\n",min2-max1+1-count);
            }

            a3=0;

        }
        //printf("%d",count);
        /*
        for(int i=0;i<count;i++){
            printf("%d",out[i]);
        }
         */
        return 0;
    }