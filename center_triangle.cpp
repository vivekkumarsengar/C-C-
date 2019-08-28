// You are using GCC
// 5
// *****
//  *  *
//   * *
//    **
//     *  
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int j=num;j>=i;j--)
        {
            if(i==1 || i==num)
                printf("*");
            else if(j==num || j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}