
// i/p: 6
// o/p:
// 1	2	3	4	5	6	
// 13	14	15	16	17	18	
// 25	26	27	28	29	30	
// 31	32	33	34	35	36	
// 19	20	21	22	23	24	
// 7	8	9	10	11	12	

// i/p: 5
// o/p:
// 1	2	3	4	5	
// 11	12	13	14	15	
// 21	22	23	24	25	
// 16	17	18	19	20	
// 6	7	8	9	10	


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
