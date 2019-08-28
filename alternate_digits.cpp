// You are using GCC
// i/p :12345
// o/p :21435


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long num=0,last_d=0,placevalue=1,count=0,new_digit=0,swap=0,digits=0;
    cin>>num;
    while(num/placevalue)
    {
        count++;
        placevalue*=10;
    }
    
    if(count%2!=0)
    {
        last_d=num%10;
        num=num/10;
    }
    placevalue=1;
    while(num)
    {
        digits=num%100;
        swap=(digits%10)*10+(digits/10);
        cout<<swap<<endl<<placevalue<<"\n";
        new_digit= new_digit + swap*placevalue;
        cout<<new_digit<<endl;
        placevalue*=100;
        num=num/100;
    }
    if(count%2==1)
        cout<<(new_digit*10+last_d);
    else
        cout<<new_digit;
    return 0;
        
    
}