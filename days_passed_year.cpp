// You are using GCC
// i/p: 24/4/2018
// o/p: 114


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int dd,mm,yy,total=0,days=0;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if((yy%4==0 && yy%100!=0) || yy%400==0)
    {
        total=total+1;
    }
    
    switch(mm-1)
    {
        case 1:days=31;
                break;
        case 2:days=59;
                break;
        case 3:days=90;
                break;
        case 4:days=120;
                break;
        case 5:days=151;
                break;
        case 6:days=181;
                break;
        case 7:days=212;
                break;
        case 8:days=243;
                break;
        case 9:days=273;
                break;
        case 10:days=304;
                break;
        case 11:days=334;
                 break;
        case 12:days=365;
                 break;
    }
    total=days+dd+total;
    cout<<total;
}