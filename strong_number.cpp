// You are using GCC
#include<iostream>
#include<stdio.h>
using namespace std;
long factorial(long num)
{
    // int fact=1;
    if(num==0||num==1)
    {
        return 1;
    
    }
    // for(i=1;i<=num;i++)
    // {
    //   fact=fact*i;
    // }
    return num*factorial(num-1);
}
long digit(long num)
{
    long sum=0,d;
    while(num)
    {
        d=num%10;
        sum=sum+factorial(d);
        num=num/10;
    }
    return sum;
}
int main()
{
    int num,result=0;
    cin>>num;
    result=digit(num);
    if(num==result)
    {
        cout<<"STRONG NUMBER";
    }
    else
        cout<<"NOT A STRONG NUMBER";
    
   return 0; 
}