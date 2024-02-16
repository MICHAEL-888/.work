//
// Created by Michael on 2023/12/2.
//
#include <stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==!arr[i+1]) {
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            if(count>max){
                max=count;
            }
            count=1;
        }
    }
    if(max%2!=0){
        max-=1;
    }
    printf("%d",max);
}