#include <stdio.h>

int main()
{
    int i,j;
    
    // * * *
    // * * *
    // * * *
    
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    int k,l;
    
    // *
    // * *
    // * * *
    // * * * * 
    // * * * * *
    
    for(k=1; k<=5; k++)
    {
        for(l=1; l<=k; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    int m,n;
    
    // * * * * *
    // * * * *
    // * * *
    // * * 
    // *
    
    for(m=1; m<=5; m++)
    {
        for(n=5; n>=1; n--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}