// You are using GCC  
#include<stdio.h>
int main()
{
    int num,d,sum=0,new_num;
    scanf("%d",&num);
    new_num = num;
    while(num)
    {
        d = num % 10;
        sum = sum + d;
        num=num/10;
    }
    if(new_num%sum==0)
    {
        printf("Harshad Number");
    }
    else
    {
        printf("Not a Harshad Number");
    }
    return 0;
}