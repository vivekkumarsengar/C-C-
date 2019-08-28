// i/p: 20/12/1999
// o/p: Valid

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k=1,m=0;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
       
        if(i<=n/2+n%2)
        {
        for(int j=1;j<=n;j++)
        {
         
         cout<<k<<"\t";
         k++;
        }
        m=k;
        k=k+n;
        cout<<"\n";
       }
       
       else
       {
          
           if(n%2!=0)
           {
             k=k-n*2-n;
                for(int j=1;j<=n;j++)
                {
           
                    cout<<k<<"\t";
                     k++;
           
                }
                cout<<"\n";
            }
           
      
            if(n%2==0)
            {   
                 
                 for(int j=1;j<=n;j++)
                 {
                     
                     cout<<m<<"\t";
                     m++;
         
                 }
                 cout<<"\n";
                 m=m-n*3;
            }
        
       }
    }
    
}