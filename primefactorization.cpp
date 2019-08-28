// i/p: 100
// o/p: 2->2
//      5->2


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,c=0,i;
    cin>>num;
    i=2;
    while(1)
    {   c=0;
        while(num%i==0)
        {
            num=num/i;
            c++;
            
            
        }
        if(c!=0)
        cout<<i<<"->"<<c<<"\n";
        if(num==1)
             break;
       
        i++;
    }
}