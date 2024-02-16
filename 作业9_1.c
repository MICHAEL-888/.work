//
// Created by Michael on 2023/12/30.
//
#include <stdio.h>
#include <string.h>

int strrindex(char *s, char *t);

int main() {
    char s[9999];
    char t[9999];
    int ret;
    fgets(s, sizeof(s), stdin);   //fgets函数末尾存在一个换行符导致strlen长度+1,gets函数没有末尾换行符
    fgets(t, sizeof(t), stdin);
    ret = strrindex(s, t);
    printf("%d", ret);
    return 0;
}

int strrindex(char *s, char *t) {
    unsigned long long tlen, slen;
    int count = 0;
    tlen = strlen(t);
    slen = strlen(s);
    for (int i = slen - 1; i != -1; i--) {
        if (s[i] == t[0]) {
            for (int j = 0; j < tlen - 1; j++) {
                if (s[i + j] == t[j]) {
                    //printf("%c %c\n",s[i + j],t[j]);
                    count++;
                    //printf ("%d",count);
                }
            }
            if (count == tlen - 1) {  //存在一个换行符，必须清除
                return i;
            }
            count = 0;
        }
    }
    return -1;
}