#include <stdio.h>
int main(){
    char str[100]={};
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==32 && str[i+1]!=32){
            str[i+1]-=32;
        }
        else if(i==0){
            str[i]-=32;
        }
    }
    fputs(str,stdout);
    return 0;
}