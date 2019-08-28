#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct DATE
{
    int dd;
    int mm;
    int yyyy;
}Date;
int getDD(Date gd)
{
    return gd.dd;
}
int getMM(Date gd)
{
    return gd.mm;
}
int getYY(Date gd)
{
    return gd.yyyy;
}
void setDD(Date *d , int gd)
{
     d->dd =gd ;
}
void setMM(Date *d , int gd)
{
     d->mm =gd ;
}
void setYY(Date *d , int gd)
{
     d->yyyy =gd ;
}
void setDate( Date *d , int dd , int mm , int yy)
{
  d->dd=dd;
   d->mm=mm;
   d->yyyy=yy;
}

// You a,math.hre using GCC
#include<stdlib.h>
long date(Date date3)
{
    long total=0,days,k;
    k=(date3.yyyy-1-1900);
    //total=(k*365)+(k/4);
    switch(date3.mm-1)
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
        default:date3.mm=0;
        break;
        
    }
    
    if(date3.yyyy%400==0 ||(date3.yyyy%100!=0 && date3.yyyy%4==0))
        {
            if(date3.mm>2)
            total=total+1;
        }
    total=total+date3.dd+days +(k*365)+(k/4);
    return total;
    
}
int difference_in_dates(Date date1,Date date2)
{
   
    long x,y;
    x=date(date1);
    //int m = abs(date1.yyyy - date2.yyyy);
    y=date(date2);
    long z=abs(x-y);
    //cout<<x<<" "<<y<<" ";
    return z;

    
}

int main()
{
 Date d1, d2;
 int d,m,y;
 scanf("%d %d %d",&d,&m,&y);
 setDate(&d1,d,m,y);
 scanf("%d %d %d",&d,&m,&y);
 setDate(&d2,d,m,y);
 printf("%ld",difference_in_dates(d1,d2));
 return 0;
}
