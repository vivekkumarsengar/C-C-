#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
     long long num,i=1,c;
    int count=1;
    cin>>num;
    long long d=sqrt(num);
    while(i<=d)
    {
        if(d%i==0)
        {
            count++;
        }
        i++;
        
         
    }
    if(count!=0)
    {
        c=sqrt(num)*sqrt(num);
        if(num==c)  //perfect square
         cout<<(2*(count)-1);
        else                    // non perfect
            cout<<2*count;
    }
       
    else
        cout<<"No factor";
        
}