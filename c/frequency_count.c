// #include<stdio.h>

// int main()
// {
//     int i , j , arr[2][2];

//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("Element[%d][%d]:",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }


//     int num , count = 0;

//     printf("Enter number : ");
//     scanf("%d",&num);

//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             if (arr[i][j] == num)
//             {
//                 count++;
//             }
//         }
//     }

//     printf("%d comes %d times ",num,count);

    
//     return 0;
// }


#include<stdio.h>

int main()
{
    int i , j , arr[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    

    return 0;
}