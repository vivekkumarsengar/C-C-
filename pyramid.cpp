//     *
//    ***
//  ******
 #include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int s=num;
    for(int i=1;i<=num;i++)
    {
        for(int j=i;j<s;j++)
        {
            printf(" ");
        }
    
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}