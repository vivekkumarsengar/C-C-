// You are using GCC
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,arr[100],i,d=0;
    cin>>num;
    i=0;
    while(num)
    {
        d=num%2;
        arr[i]=d;
        num=num/2;
        i++;
    }
   
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    return 0;
    
}