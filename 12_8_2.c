#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    long long arr[n],temp;
    long long arr2[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }


/*
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
*/

    for (int k = 0; k < n; k++) {
        if(k==n-1){
            printf("%lld", arr[k]);
        }
        else{
            printf("%lld ", arr[k]);
        }
    }
    printf("\n");
    return 0;
}