// You are using GCC
// i/p: 1875172
// o/p:
// 1 : 2
// 2 : 1
// 5 : 1
// 7 : 2
// 8 : 1


#include<stdio.h>
int main()
{
    long long int num;
    int count=0,d[30],c=0,i;
    scanf("%lld",&num);
    i=0;
    while(num)
    {
        d[i]=num%10;
        count++;
        num=num/10;
        i++;
    }
    for( int k=0;k<=9;k++)
    {
        c=0;
        for(int j=0;j<=count-1;j++)
        {
            if(k==d[j])
                c++;
        }
        if(c!=0)
        {
            printf("%d : %d\n" ,k,c);
        }
    }
    return 0;
}

