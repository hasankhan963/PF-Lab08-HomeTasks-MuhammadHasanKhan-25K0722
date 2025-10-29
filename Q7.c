#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {

        // star pattern
        for (j = 1; j <= n - i; j++)  //left spaces
		{
			printf("  ");
		}
        for (j = 1; j <= (2*i - 1); j++) //no of characters for pyramid pattern
		{
			printf("* ");
		}
        for (j = 1; j <= n - i; j++)  //right spaced
		{
			printf("  ");
		}       
        printf(" | ");

        // number pattern
        for (j = 1; j <= n - i; j++) 
		{
			printf("  ");
		}
        for (j = 1; j <= (2*i - 1); j++) 
		{
			printf("%d ", j);
		}
        for (j = 1; j <= n - i; j++) 
		{
			printf("  ");
		}
        printf(" | ");

        // alphabet pattern
        for (j = 1; j <= n - i; j++) 
		{
			printf("  ");
		}
        for (j = 0; j < (2*i - 1); j++) 
		{
			printf("%c ", 'A' + j);
		}

        printf("\n");
    }

    return 0;
}

