#include <stdio.h>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[2000000];
    int count=0;
    int temp;
    for(int i=1;i<=n;i++){
        temp=i;
        if(temp==x){
            count++;
            continue;
        }
        for(int i2=0;i2<8;i2++){
            if(temp%10==x){
            count++;
            }
            temp/=10;
            if(temp==0){
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}