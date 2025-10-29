#include <stdio.h>

int main() 
{
    int original[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    int inverted[4][4];
    int i, j;
    int whiteOriginal = 0, whiteInverted = 0;

    for(i = 0; i < 4; i++) 
	{
        for(j = 0; j < 4; j++) 
		{
            inverted[i][j] = 1 - original[i][j]; 
            if(original[i][j] == 1)
                whiteOriginal++;
            if(inverted[i][j] == 1)
                whiteInverted++;
        }
    }

    printf("Original Image\t\tInverted Image\n");

    for(i = 0; i < 4; i++) 
	{
        for(j = 0; j < 4; j++)
            printf("%d ", original[i][j]);
        printf("\t\t");
        for(j = 0; j < 4; j++)
            printf("%d ", inverted[i][j]);
        printf("\n");
    }

    printf("\nNumber of white pixels in Original Image: %d\n", whiteOriginal);
    printf("Number of white pixels in Inverted Image: %d\n", whiteInverted);

    return 0;
}
