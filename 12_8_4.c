#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    //录入数组
    }
    int a=0;
    for(int i=0;i<n;i++){
        for(int i2=0;i2<n;i2++){
            if(arr[i]==arr[i2] && a==1){      //重复记为30001
                arr[i2]=30001;
            }
            if(arr[i]==arr[i2]){
                a=1;
            }
        }
        a=0;
    }
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {    //冒泡排序
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
        if(arr[k-1] != 30001){
            printf("%d",arr[k-1]);   //判断输出
        }
        else{
            printf("NO RESULT");
        }
        
        return 0;
}