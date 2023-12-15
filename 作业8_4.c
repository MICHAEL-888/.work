#include <stdio.h>
void stringNx(char *a);
int main(){
    char a[100]={};
    fgets(a,sizeof(a),stdin);
    //gets(a);
    stringNx(a);
    return 0;

}
void stringNx(char *a){
    for(int i=99;i>=0;i--){
        if(a[i]!='\0'){
            printf("%c",a[i]);
        }
    }
}