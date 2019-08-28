// i/p= 7    
//1 0 1 1 1 0 1
// o/p;
// 0->1
// 1->2
// 4->5
// 5->6



#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[100],n,count_z=0,count_o=0,ind=0,i,j,d=0,max=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]==0)
                count_z++;
            if(a[j]==1)
                count_o++;
                
             
            if(count_z==count_o)
            {
                
                
                 d=count_z+count_o;
                
                  if(d>max)
                 {
                     max=d;
                    
                 }
            }
       
               
        
             
          
    }
    
   
       
        d=0;
        count_z=0;
        count_o=0;
       
        
    }
    
    
    if(max==0)
    {
        cout<<"NO SUCH ARRAY";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]==0)
                count_z++;
            if(a[j]==1)
                count_o++;
                
             
            if(count_z==count_o)
            {
                
                
                 d=count_z+count_o;
                
                  if(d==max)
                 {
                     cout<<i<<"->"<<j<<"\n";
                    
                 }
            }
      
    }
    
   d=0;
        count_z=0;
        count_o=0;
       
        
    }
    
    return 0;
}
