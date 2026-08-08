// Programming Excercise

// 11.Write a C program to find maximum between three numbers.

#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter Second number : ");
    scanf("%d", &n2);
    printf("Enter Third number : ");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("n1 is Big");
        }
    }
    else
    {
        if ((n2 > n1) && (n2 > n3))
        {
            printf("n2 is big");
        }
        else if ((n1 == n2) && (n2 == n3))
        {
            printf("All are Equal");
        }
        else
        {
            printf("n3 is big");
        }
    }

    return 0;
}

// 14.Write a C program to check whether a number is negative, positive or zero.
// 15. Write a C program to input any character and check whether it is alphabet, digit or special character.

 
