// i/p:12
// o/p:2

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,count=0;
    cin>>num;
    int i=2;
    while(1)
    {
        while(num%i==0)
        {
            count++;
        
        if(count==1)
        {
            cout<<i;
            return 0;
        }
        i++;
        }
        
        
    }
}