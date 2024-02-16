//
// Created by Michael on 2023/12/2.
//
#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int da;
    for(int i=0;i<t;i++){
        da=arr[i][0]+arr[i][1]+arr[i][2];
        da=da%7;
        if(da==0){
            da=7;
        }
        printf("%d\n",da);
    }
}