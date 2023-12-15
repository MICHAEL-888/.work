//
// Created by Michael on 2023/10/20.
//
#include <stdio.h>
int main(){
    float n,y=1;
    float i=2;
    scanf("%f",&n);
    while(i<=2*n)
    {
        if((int)i%2==0){
            y=y-1/i;
            //printf("i=%d y=%f\n",i,y);
        }
        else{
            y=y+1/i;
            //printf("i=%d y=%f\n",i,y);
        }
        i++;
    }

    printf("%.2f",y);
    return 0;
}