#include<iostream>
#include<stdio.h>
int main()
{
    int dd,mm,yy;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if(dd<=31 && dd>0)
    {
        if(mm<=12 && mm>0)
        {
            if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
            {
                if(dd<=31 && dd>0)
                    printf("Valid");
                else
                    printf("Invalid");
                    
            
            }
            else if(mm==4||mm==6||mm==9||mm==11)
            {
                if(dd<=30 && dd>0)
                    printf("Valid");
                else
                    printf("Invalid");
            }
            else
            {
                if((yy%4==0 && yy%100!=0)||yy%400==0)
                {
                  if(dd<=29 && dd>0)
                    printf("Valid");
                  else
                    printf("Invalid");
                }
                else
                {
                    if(dd<=28 && dd>0)
                        printf("Valid");
                    else
                        printf("Invalid");
                }
            }
        }
    }
    else
        printf("Invalid");
   
    return 0;
    
}