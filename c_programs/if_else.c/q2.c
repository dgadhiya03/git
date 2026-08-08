// 13.Write a C program to find maximum between five numbers.

#include <stdio.h>

int main()
{

    int n1, n2, n3, n4;

    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter Second number : ");
    scanf("%d", &n2);
    printf("Enter Third number : ");
    scanf("%d", &n3);
    printf("Enter Fourth number : ");
    scanf("%d", &n4);

    if (n1 > n2){
        if(n1 > n3){
            if(n1 > n4){
                printf("n1 is Big");
            }
        }
    }else if(n2 > n1){
        if(n2 > n3){
            if(n2 > n4){
                printf("n2 is Big");
            }
        }
    }else if(n3 > n1){
        if (n3 > n2){
            if (n3 > n4){
                printf("n3 is Big");
            }
        }
    }else{
        if ((n1 == n2) && (n2 == n3) && (n3 == n4)){
            printf("All are Equal");
        }else{
            printf("n4 is Big");
        }
    }


    return 0;
}