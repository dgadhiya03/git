// 1. W.a.p check number positive or negative

#include<stdio.h>

int main()
{
    int num;

    printf("Enter Your Number : ");
    scanf("%d",&num);

    if (num > 0){
        printf("Positive");
    }else
    {
        printf("Nagative");
    }

    return 0;
}