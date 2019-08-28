//  4 5
//   *****
//    *****
//     *****
//       *****




#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=colum;j++)
        {
            printf("*");
        }
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
    }
    return 0;
}