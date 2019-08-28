// You are using GCC

// 5 
// 4
// 3
// 2
// -1
// Min = 2
// Max = 5
// Sum = 14
// Avg = 3.500000

#include<iostream>
#include<stdio.h>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],count=0,sum=0;
    float avg;
    for(int i=0; ;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==-1)
        {
            break;
        }
        count++;
    }
    sort(a,a+count);
    cout<<"Min = "<<a[0]<<"\n";
    cout<<"Max = "<<a[count-1]<<"\n";
    for(int i=0;i<count; i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum = "<<sum<<"\n";
    avg=(float)sum/(count);
    printf("Avg = %.6f",avg);

}