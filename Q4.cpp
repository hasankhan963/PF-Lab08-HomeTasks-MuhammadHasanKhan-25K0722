#include <stdio.h>

int main() 
{
    int seats[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };
    
    int i, j;
    int available = 0;

    printf("Cinema Seats Booking System \n");

    for(i = 0; i < 3; i++) 
	{
        for(j = 0; j < 3; j++) 
		{
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }

    printf("\nAvailable seats: \n");

    for(i = 0; i < 3; i++) 
	{
        for(j = 0; j < 3; j++) 
		{
            if(seats[i][j] == 0) 
			{
                available++;
                printf("Row %d, Seat %d\n", i + 1, j + 1);
            }
        }
    }

    printf("\nTotal number of available seats: %d\n", available);

    return 0;
}
