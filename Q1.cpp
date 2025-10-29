#include <stdio.h>

int main() 
{
    int class1[4], class2[4], class3[4];
    int i;
    float avg1 = 0, avg2 = 0, avg3 = 0;

    printf("Enter 4 scores for Class 1: \n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &class1[i]);
        avg1 += class1[i];
    }
    avg1 /= 4;

    printf("\nEnter 4 scores for Class 2: \n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &class2[i]);
        avg2 += class2[i];
    }
    avg2 /= 4;

    printf("\nEnter 4 scores for Class 3: \n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &class3[i]);
        avg3 += class3[i];
    }
    avg3 /= 4;

    printf("\nAverage score for Class 1: %.2f\n", avg1);
    printf("Average score for Class 2: %.2f\n", avg2);
    printf("Average score for Class 3: %.2f\n", avg3);

    return 0;
}
