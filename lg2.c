#include <stdio.h>
int isnum(int n);
int main(){
    int n,p,i;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        //if(isnum(i)){
            if(n%i==0){
                //if(isnum(n/i)){
                    printf("%d",n/i);
                    break;
                //}
            }
        //}

    }
    return 0;

}
int isnum(int n){
    int i;
    for(i=2;i<n;i++){
        if((float)n/(float)i==n/i){
            return 0;
        }
    }
    return 1;
}