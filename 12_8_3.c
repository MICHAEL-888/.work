#include<stdio.h>
int main(){
    int n,x,max=0;
    scanf("%d",&n);
    if(n==1){
        printf("%d",1);
    }
    /*
    x=n;
    while(x!=0){
        max+=x;
        if(x!=1){
            max*=10;
        }
        x/=2;
    }
    //printf("%d",max);
    int temp,g,s,count=0,judge=0;
    for(int i=max;i>0;i--){
        if(i/)
        for(int i2=0;i2<i;i2++){
            temp=i;
            //printf("%d\n",temp);
            g=temp%10;
            temp/=10;
            //printf("%d\n",temp);
            s=temp%10;
            //printf("%d %d\n",g,s);
            if(g==1 && s==1){
                break;
            }
            if(g<=s/2){
                judge=1;
                //printf("%d %d\n",g,s);
            }
            else{
                if(g!=1 && s!=1){
                    judge=0;
                    break;
                }
                
            }
        }
        if(judge==1){
            count++;
            printf("%d %d %d\n",temp,g,s);
        }
        judge=0;
    }
    printf("%d",count);
    */
}