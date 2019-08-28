
// 6 1 2 3 4 5 6

// 132546


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[100],temp,count,n;
    cin>>n;
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i+=2)
    {
        
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                
            }
          
         if(a[i+1]<a[i+2])
            {
                temp=a[i+1];
                a[i+1]=a[i+2];
                a[i+2]=temp;
                
            }
         
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}