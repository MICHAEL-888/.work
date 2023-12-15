#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[101];
    gets(s);
    int cases,n;
    scanf("%d %d",&cases,&n);
    char str[n][101];
    getchar();    //读出缓冲区回车符！！！
    for(int i=0;i<n;i++){
        gets(str[i]);
    }

    if(cases==0){   //大小写不敏感
        for(int i=0;i<101;i++){
            s[i]=tolower(s[i]);      //比对字符串转为小写
        }
        
        char temp[101];
        for(int i=0;i<n;i++){
            for(int j=0;j<101;j++){   //初始化临时变量
                temp[j]='.';
            }

            for(int j=0;j<101;j++)
            {
                temp[j]=tolower(str[i][j]);     //全部转换小写  整型截断
                //puts(str[i]);
                if(strstr(temp,s)!=NULL){
                puts(str[i]);
                break;
                }
            }
        }
/*
        for(int i=0;i<n;i++){
            if(strstr(str[i],s)!=NULL){
                puts(str[i]);
            }
        }
        */
    }
    else{     //大小写敏感
        for(int i=0;i<n;i++){
            if(strstr(str[i],s)!=NULL){
                puts(str[i]);
            }
        }
    }
    return 0;
}
