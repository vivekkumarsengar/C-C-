// You are using GCC
#include<iostream>
#include<stdio.h>
using namespace std;
long factor(long num)
{
    long sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    return sum;
}
int main()
{
    long num1,num2;
    cin>>num1;
    cin>>num2;
    long s1=factor(num1);
    long s2=factor(num2);
    if((num1==s2)&&(num2==s1))
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
    
}