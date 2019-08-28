// You are using GCC
// i/p : 843758 8
// o/p : 2
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long num,occr,i,d,count=0;
    cin>>num>>occr;
    while(num)
    {
        
        d=num%10;
        if(d==occr)
            count++;
        num=num/10;
        
    }
    cout<<count;
    return 0;
}