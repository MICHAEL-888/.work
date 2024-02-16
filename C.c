//
// Created by Michael on 2023/12/2.
//
#include <stdio.h>
#include <math.h>
int main(){
    int t;
    int ret=1;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++){
        if(arr[i]>1){
            printf("%d\n",5);
        }
        else{
            printf("%d\n",9);
        }
    }
    return 0;
}