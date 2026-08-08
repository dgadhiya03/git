// 16. Write a C program to input marks of five subjects
// Physics, Chemistry, Biology, Mathematics and Computer. 
// Calculate percentage and grade according to following:

// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <stdio.h>

int main()
{

    int physics, chemistry, biology, mathematics, computer;

    printf("physics : ");
    scanf("%d",&physics);
    printf("chemistry : ");
    scanf("%d",&chemistry);
    printf("biology : ");
    scanf("%d",&biology);
    printf("mathematics : ");
    scanf("%d",&mathematics);
    printf("computer : ");
    scanf("%d",&computer);

    int marks = physics + chemistry + biology + mathematics + computer;
    printf("total marks %d",marks);

    int percentage =  marks / 500 * 100;
    printf("%d",percentage);

    return 0;
}