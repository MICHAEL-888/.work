//
// Created by Michael on 2023/12/15.
//
#include <stdio.h>
int main(){
    char str[256];
    fgets(str,sizeof(str),stdin);
    int temp=0;
    int sum=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='0' && str[i]<='9'){
            temp=temp*10+(str[i]-48);
            //printf("%d %d",temp,sum);
        } else{
            sum+=temp;
            //printf("%d %d",temp,sum);
            temp=0;
        }
    }
    printf("%d",sum);
    return 0;
}