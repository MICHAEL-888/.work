//
// Created by Michael on 2023/12/3.
//
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=i*i*i*i+i*i*i+i*i+i+1;
        if(sum>n){
            printf("No");
            return 0;
        }
        if(n==sum){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}