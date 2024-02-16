//
// Created by Michael on 2023/12/2.
//
#include <stdio.h>
#include <string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[n][1];//是否通过
    int arr2[n][1];//罚时计算
    for(int i=0;i<n;i++){
        arr1[i][0]=0;//初始化为未通过
        arr2[i][0]=0;//没有罚时
    }
    int xuhao;
    char state[4];
    for(int i=0;i<m;i++){
        scanf("%d",&xuhao);
        scanf("%s",state);
        if(strcmp(state,"AC") == 0){
            arr1[xuhao-1][0]=1;
        }
        else{
            if(arr1[xuhao-1][0]!=1){
                arr2[xuhao-1][0]=arr2[xuhao-1][0]+1;
            }

        }
    }
    int ac=0,fs=0;
    for(int i=0;i<n;i++){
        if(arr1[i][0]==1){
            ac++;
            fs=fs+arr2[i][0];
        }
    }
    printf("%d %d",ac,fs);
    return 0;
}