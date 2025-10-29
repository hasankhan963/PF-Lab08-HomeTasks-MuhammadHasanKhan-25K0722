#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) 
	{
        //star pattern
        for (j = 0; j < n - i; j++) //row 1 has 4 spaces hence the n-i=>5-1=4
		{
			printf("  ");
		} 
        for (j = 0; j < i; j++)
		{
			printf("* ");
		}
        printf("\t|\t");

        //number pattern
        for (j = 0; j < n - i; j++) 
		{
			printf("  ");
		}
        for (j = 1; j <= i; j++) //j<=5 cuz 5 also needs to be printed
		{
        	printf("%d ", j);
		}
        printf("\t|\t");

        //alphabet pattern
        for (j = 0; j < n - i; j++) 
		{
			printf("  ");
		}
        for (j = 0; j < i; j++) 
		{
			printf("%c ", 'A' + j);
		}

        printf("\n");
    }

    return 0;
}

