#include <stdio.h>

int main() 
{
    int year1[12] = {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15};
    int year2[12] = {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16};

    int i;

    printf("Photos taken each month:\n");

    printf("\nYear 1:\n");
    for(i = 0; i < 12; i++) 
	{
        printf("Month %d: %d photos\n", i + 1, year1[i]);
    }

    printf("\nYear 2:\n");
    for(i = 0; i < 12; i++) 
	{
        printf("Month %d: %d photos\n", i + 1, year2[i]);
    }

    return 0;
}
