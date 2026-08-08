#include<stdio.h>

int main()
{
    int arr[3][4] = {{1,2,3,11},
                     {4,5,6,12},
                     {7,8,9,14}} , sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if( i == 0 || i == 2 || j == 0 || j == 3 )
            {
                //  printf("%d",arr[i][j]);
                 sum = sum + arr[i][j];
            }
            // else
            // {
            //     printf(" ");
            // }    
        }
        printf("\n");
    }
    printf("%d",sum);
    
    return 0;
}