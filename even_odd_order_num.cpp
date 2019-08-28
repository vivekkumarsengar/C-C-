// i/p:123456789
// o/p:246813579
#include<iostream>
#include<stdio.h>
using namespace std;
int reve(int num)
{
    long rev=0;
    int d;
    while(num)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    return rev;
}
int main()
{
    long num,d=0,n=0,f=0;
    cin>>num;
    d=reve(num);
    f=d;
    while(d)
    {
        n=d%10;
        if(n%2==0)
        {  
            cout<<n;    
        }
        d=d/10;
        
        
    }
    while(f)
    {
        n=f%10;
        if(n%2!=0)
        {
            cout<<n;
        }
        f=f/10;
        
    }
    
}