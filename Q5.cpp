#include <stdio.h>

int main() 
{
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    int i, j;
    int r = 4, c = 4;
    int Cold;
    
    printf("Grid of Temperatures(degrees C): \n");
    for(i = 0; i < 4; i++)
    {
    	for(j = 0; j < 4; j++)
    	{
    		printf("%4d ",temp[i][j]);
		}
		printf("\n");
	}
	
    printf("\nCold spots found:\n");

    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            Cold = 1; 

            if (i > 0 && temp[i][j] >= temp[i - 1][j])
                Cold = 0;
            
            if (i < r - 1 && temp[i][j] >= temp[i + 1][j])
                Cold = 0;
            
            if (j > 0 && temp[i][j] >= temp[i][j - 1])
                Cold = 0;
            
            if (j < c - 1 && temp[i][j] >= temp[i][j + 1])
                Cold = 0;

            if (Cold == 1)
                printf("- At position (%d,%d) with temperature %d degrees C\n", i + 1, j + 1, temp[i][j]);
        }
    }

    return 0;
}
