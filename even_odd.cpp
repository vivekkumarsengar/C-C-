// You are using GCC
// i/p:12345
// o/p:
// 1 is odd
// 2 is even
// 3 is odd
// 4 is even
// 5 is odd

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,d,rev=0;
    cin>>num;
    while(num)
    {
       d=num%10;
       rev=rev*10+d;
       num=num/10;
    }
    while(rev)
    {
        d=rev%10;
        if(d%2==0)
            cout<<d<<" is even\n";
        else
            cout<<d<<" is odd\n";
        rev=rev/10;
    }
    return 0;
}
   