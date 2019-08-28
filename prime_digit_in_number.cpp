// You are using GCC  2347   237
#include<stdio.h>

int prime(int num)
{
    int count=0;
    
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
   return count;
        
}
int reve(int num)
{
    int d,rev=0;
    while(num)
    {
      d=num%10;
      rev=rev * 10+d;
      num/=10;
    }
    return rev;
}
int main()
{
    int num,d,p,nu[100];
    scanf("%d",&num);
    int c=reve(num);
    while(c)
    {
        d=c%10;
        p=prime(d);
        if(p==0)
          {  printf("%d ",d);
          }
          c=c/10;
    }
   
    return 0;
    
}