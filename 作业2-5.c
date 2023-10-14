#include <stdio.h>
int main()
{
    float cm,kg;
    float st;
    scanf("%f",&cm);//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    scanf("%f",&kg);
    st=cm-110;
    if(kg>=st+5)
        printf("fat");
    else if(kg<=st-5)
        printf("thin");
    else
        printf("good");
    return 0;
}
