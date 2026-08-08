#include<stdio.h>
int main(){

    int num, fact = 1;
    
    printf("Enter NUmber :- ");
    scanf("%d",&num);

    for (int i = num; i >= 1; i--){
        fact = fact * i;
        printf("%d\n",fact);
    }

    return 0;
}