// i/p:2 200
// o/p :  2 3 4 5 6 7 8 9 153 


#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int digit(int num)
{
    int d,count=0,sum=0;
    int e=num;
    while(num)
    {
        d=num%10;
        count++;
        num=num/10;
        
    }
    while(e)
    {
        d=e%10;
        sum=sum+pow(d,count);
        e=e/10;
    }
    count=0;
    return sum;
}
int main()
{
    int start,end,z=0;
    cin>>start>>end;
    for(int i=start+1;i<end;i++)
    {
        z=digit(i);
        if(i==z)
        {
            cout<<i<<" ";
        }
    }
}