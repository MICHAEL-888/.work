#include <stdio.h>
int main(){
    int k,i;
    double sn=0;
    scanf("%d",&k);
    for(i=1;;i++){
        sn=sn+1.0/i; //注意精度问题导致错误！
        //printf("%lf\n",sn);
        if(sn>k){
            break;
        }
    }
    //printf("%lf\n",sn);q
    
    printf("%d\n",(int)i);
    return 0;
}