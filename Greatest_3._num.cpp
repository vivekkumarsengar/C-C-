// You are using GCC

// i/p: 10 90 30
// o/p:10 < 30 < 90

#include<iostream>
#include<stdio.h>
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
using namespace std;
int main()
{
    int n1,n2,n3,c,d,e;
    cin>>n1>>n2>>n3;
    c=MAX(n1,MAX(n2,n3));
    d=MIN(n1,MAX(n2,n3));
    e=MAX(MIN(n1,n2),MIN(n2,n3));
    cout<<d<<" < "<<e<<" < "<<c;
    return 0;
     
}