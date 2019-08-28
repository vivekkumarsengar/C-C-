// w           e
//   e       m
//     l   o  
//       c
//     l   o
//   e       m
// w           e



#include<iostream>
int main()
{
    char c[]="welcome";
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j  )
            {
                 printf("%c",c[i]);
            }
            else if(i+j==n-1)
            {
                printf("%c",c[n-i-1]);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}