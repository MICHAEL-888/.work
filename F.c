//
// Created by Michael on 2023/10/31.
//s
#include <stdio.h>
int a,i1,i2,i3,pre=0,count=0,wrong=0;
int main(){
    scanf("%d",&a);
    int n[a];
    for(i1=0;i1<a;i1++){
        scanf("%d",&n[i1]);//录入所有数据进数组n[]
        //printf("%d",n[i]);
    }

    for(i1=0;i1<a;i1++){
        for(i2=a;i2>=i1-1;i2--){
            pre=0;
            if(i1==i2){
                count++;//一个数的子数组单独处理否则出错！
                wrong=1;
                //printf("%d",n[i1]);
                continue;
            }
            for(i3=i1-1;i3<i2;i3++){
                //printf("n=%d i1=%d i2=%d i3=%d\n",n[i1],i1,i2,i3);
                //此处输出所有子数组，n[i3]为每轮循环中当前项
                if(i3==-1){
                    wrong=1;
                    break;
                }

                //printf("%d",n[i3]);
                if(n[i3]<pre){       //pre要重置！！！！巨坑！！！
                    wrong=1;
                    break;
                } else{
                    wrong=0;
                }
                pre=n[i3];
            }
            //printf("\n");
            if(wrong==0){
                count++;
            }
            //wrong=0;

        }

    }
    printf("%d",count);


    return 0;
}