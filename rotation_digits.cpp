// You are using GCC
// i/p:7638 3
// o/p:8763

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long num,rotat,placevalue=1,d=0,digit=0,div=0;int count=0;;
    cin>>num>>rotat;
    while(num/placevalue)
    {
        count++;
        placevalue*=10;
    }
   
    div=pow(10,count-1);
    for(int i=0;i<rotat;i++)
    {
        
        d=(num%div);
        num=num/div;
        digit=num+d*10;
        num=digit;
        
        
        
    }
    cout<<digit<<" ";
    
}