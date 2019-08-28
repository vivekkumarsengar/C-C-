// You are using GCC
// i/p: 48 200
// o/p: 48 75 140 195
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
    long num1,num2,s1,s2,s3,s4;
    cin>>num1;
    cin>>num2;
     for(int i=num1;i<=num2;i++)
     {
    s1=factor(i);
    s3=s1-1;
    if(s1>num1)   
    {
        s2=factor(s3);
        s4=s2-1;
    }
    //
    //  cout<<s1<<"             "<<s2<<"\n";
    
    // cout<<s3<<"             "<<s4<<"\n";
    if(i==s4)
    {
       cout<<i<<" ";
       //cout<<"("<<i<<","<<s3<<")"<<"\n";
    }
     }
    return 0;
    
}