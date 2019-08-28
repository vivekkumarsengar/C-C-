// i/p: 145
// o/p:yes

#include<iostream>
#include<stdio.h>
using namespace std;
int factorial(int num)
{
    long fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int sum(int num)
{
    long d,f,sum=0;
    while(num)
    {
        d=num%10;
        f=factorial(d);
        sum=sum+f;
        num=num/10;
    }
    return sum;
}
int main()
{
    long num,d;
    cin>>num;
    long e=sum(num);
    if(num==e)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}