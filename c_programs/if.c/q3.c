// 3. W.a.p to accept two integers and check whether they are equal or not.

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter First Number : ");
    scanf("%d",&num1);

    printf("Enter Second Number : ");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("%d and %d are Equal ",num1,num2);
    }
    else{
        printf("%d and %d are Not Equal ",num1,num2);
    }

    return 0;
}