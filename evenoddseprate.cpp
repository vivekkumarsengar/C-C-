// You are using GCC
// i/p=12345
// o/p=24135

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long num;
    long d,n1=0,n2=0,even_placeholder=1,odd_placeholder=1,i=0,j=0;
    cin>>num;
    while(num)
    {
        d=num%10;
        if(d%2==1)
        {
            n1=n1+d*odd_placeholder;
            odd_placeholder*=10;
            num=num/10;
            i++;
        }
        else
        {
            n2=n2+d*even_placeholder;
            even_placeholder*=10;
            num=num/10;
            j++;
            
        }
    }
    long result=n1+pow(10,i)*n2;
    cout<<result;
    

    return 0;
}