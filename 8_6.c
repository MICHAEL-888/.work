#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = {};
    char *str2[]={"auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed","void","default","goto","sizeof","volatile","do","if","while","static"};
    fgets(str, sizeof(str), stdin);
    if (str[0] == '_') {
        printf("1");
    } else if (str[0] >= 'A' && str[0] <= 'Z') {
        for(int i=0;i<32;i++){
            if (strcmp(str,str2[i])==0){
                printf("0");
                return 0;
            }
        }
        printf("1");
    } else if (str[0] >= 'a' && str[0] <= 'z') {
        for(int i=0;i<32;i++){
            if (strcmp(str,str2[i])==0){
                printf("0");
                return 0;
            }
        }
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}