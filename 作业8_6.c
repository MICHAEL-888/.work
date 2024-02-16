#include <stdio.h>
int main(){
    char str[100]={};
    fgets(str,sizeof(str),stdin);
    if(str[0]==95){
        printf("1");
    }
    else if(str[0]>='A' && str[0]<='Z'){
        if(str[0]!='C'){
            printf("1");
        }
    }
    else if(str[0]>='a' && str[0]<='z'){
        if(str[0]!='c'){
            printf("1");
        }
    }
    else{
        printf("0");
    }
    return 0;
}