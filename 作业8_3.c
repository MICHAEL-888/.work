#include <stdio.h>
int count(char *s,char *c);
int main(){
    char s[100];
    gets(s);
    char c;
    scanf("%c",&c);
    printf("%d",count(s,&c));
    return 0;

}

int count(char *s,char *c){
    int num=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==*c){
            num++;
        }
    }
    return num;
}