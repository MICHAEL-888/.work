//
// Created by Michael on 2023/12/2.
//
#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int arr[t][2];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
    }
    for(int i=0,count=0;i<t;i++){
        int x=arr[i][0];
        int y=arr[i][1];
        for(count=0;x!=y && x-y<1000000000;){
            if(x==y){
                break;
            }
            else if(x%6==0){
                if(x>arr[i][1]){
                    x/=6;
                    count++;
                }
                else{
                    x*=5;
                    count++;
                }
            }
            else{
                x*=5;
                count++;
            }
        }
        if(x==y){
            printf("%d\n",count);
        }
        else{
            printf("-1\n");
        }

    }
}