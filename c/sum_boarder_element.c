#include<stdio.h>

int main()
{
    int i , j , arr[3][3] , sum = 0;

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Array[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 2)
            {
                // sum = sum + arr[i][j];
                printf("%d",arr[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("Sum of boarder element %d ",sum);

    return 0;
}