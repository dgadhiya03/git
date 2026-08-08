#include<stdio.h>

int main()
{
    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if (j >= 6-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


// #include<stdio.h>

// int main()
// {
//     int i,j;

//     for (i = 1; i <= 5; i++)
//     {
//         int num = 5;
//         for(j = 0; j <= 5; j++)
//         {
//             if (j >= 6-i)
//             {
//                 printf("%d",num);
//                 num--;
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }