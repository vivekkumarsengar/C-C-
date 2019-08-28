// count the no 1's in the binary form of given decimal number
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,d,count=0;
    cin>>num;
    while(num)
    {
        
        if(num%2!=0)
          count++;
        else
          d=num<<1;  //because of warning value is store in d 
        num=num/2;
    }
    printf("%d",count);
}