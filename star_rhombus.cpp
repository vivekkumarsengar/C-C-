// 5 
//      *****
//     *****
//    *****
//   *****
//  *****

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=num;i>=1;i--)
    {
        for(int j=i+num;j>=1;j--)
        {
            if(j>num)
            printf(" ");
            if(j<=num)
             printf("*");
        }
        printf("\n");
    }
    return 0;
}