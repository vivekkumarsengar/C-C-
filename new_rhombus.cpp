
// You are using GCC
// 5 
//      *****
//     *   *
//    *   *
//   *   *
//  *****

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i =1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=num;j++)
        {
            if(i==1 ||i==num)
                 printf("*");
            else if( j==1 || j==num)
             printf("*");
             else
              printf(" ");
        }           
        printf("\n");
    }
    return 0;
}