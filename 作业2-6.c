#include <stdio.h>
int main()
{
    float input;
    float a;
    int b,c;
    int three=0,five=0,eleven=0;
    int num=0;
    char output="Can be divisible by ";

    scanf("%f",&input);
    a=input/3;//忘记用求余的方式了！！！
    b=a;
    //printf("a=%f b=%d",a,b);
    if(a==b)
    {
        three=1;
        num=num+1;
    }


    a=input/5;
    b=a;
    if(a==b)
    {
        five=1;
        num=num+1;
    }


    a=input/7;
    b=a;
    if(a==b)
    {
        eleven=1;
        num=num+1;
    }


    if(num==3)
        printf("Can be divisible by 3,5,7.");
    else if(num==2)
    {
        if(three==1)
            output=output+"3,";
        if(five==1)
            output=output+"5,";
        if(eleven==1)
            output=output+"7.";
        printf("%s",output);
    }
    else if(num==1)
    {
        if(three==1)
            printf("Can be divisible by 3.");
        if(five==1)
            printf("Can be divisible by 5.");
        if(eleven==1)
            printf("Can be divisible by 7.");
    }
    else
        printf("Can not be divisible by 3,5,7.");

    return 0;

}
