//
// Created by Michael on 2024/1/13.
//
#include <stdio.h>
int ppp(int arr[],int n);
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n,k,x;
        int arr[200001];
        scanf("%d %d %d",&n,&k,&x);  //n个元素，Alice删除k个最大化，Bob乘x个最小化
        int tempk=k;
        int tempx=x;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        ppp(arr,n);
        //printf("x");
        int tempsum=0;
        int sum=0;
        while(tempsum!=2){
            tempsum++;
            //printf("%d",tempsum);
            for(int j=0;j<n;j++){
                if(arr[j]<0 && tempk!=0){
                    arr[j]=0;
                    tempk--;
                }
                if(tempk==0){
                    break;
                }
            }
            for(int j=n-1;j>=0;j--){
                if(arr[j]>0 && tempx!=0){
                    arr[j]=arr[j]*(-1);
                    tempx--;
                }
                if(tempx==0){
                    break;
                }
            }
            //tempsum=sum;

        }
        for(int j=0;j<n;j++){
            sum+=arr[j];
        }
        printf("%d\n",sum);

    }
}
int ppp(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return 0;
}