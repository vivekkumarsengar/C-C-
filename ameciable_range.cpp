// i/p: 1 3000
// o/p:220 284 1184 1210 2620 2924 
#include<iostream>
#include<stdio.h>
using namespace std;
long factor(long num)
{
    long sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    long start,end,i,fac1,fac2;
    cin>>start>>end;
    for(i=start;i<=end;i++)
    {
        fac1=factor(i);
        if(fac1>i)
        {
         fac2=factor(fac1);
        if(i==fac2 )
          {
            cout<<i<<" "<<fac1<<" ";
          }
        } 
    }
    
}