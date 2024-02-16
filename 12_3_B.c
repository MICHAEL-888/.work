//
// Created by Michael on 2023/12/3.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d",&n,&x1,&y1,&x2,&y2);
    if(x1+1==x2 && y1==y2 || y1+1==y2 && x1==x2 || x2+1==x1 && y1==y2 || y2+1==y1 && x1==x2){
        printf("1");
    }
    else if(x1+1==x2 && y1+1==y2 || x2+1==x1 && y2+1==y1){
        printf("2");
    }
    else if(x1<=n/2 ||y1<=n/2){
        printf("%d",abs(x2-x1)+abs(y2-y1));
    }
    else{
        x3=n-x1+1;
        y3=n-y1+1;   //执行一次对角变换
        printf("%d",abs(x3-x2)+abs(y3-y2)+1);

    }
    return 0;
}