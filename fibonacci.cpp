// You are using GCC
// 7
// 1 1 2 3 5 8 13

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,fib1=1,fib2=1,temp;
    cin>>n;
    cout<<fib1<<" "<<fib2<<" ";
    for(int i=1;i<=n-2;i++)
    {
        temp=fib1+fib2;
        fib1=fib2;
        fib2=temp;
        cout<<fib2<<" ";
        
    }
    
}
