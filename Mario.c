//Recreating Mario from CS 50 Harvard!
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number_of_bricks;
	int i;//used for concatenation
	int j;
	printf("Enter your amount of bricks: \n");
	scanf("%d", &number_of_bricks);
	
	
	
		for (j = 0; j < number_of_bricks; j++)
		{
			for (i = j; i < number_of_bricks; i++)
			{
				printf(" ");
			}
			for (i = j+1; i > 0; i--)
			{
				printf("#");
			}
			printf(" ");
			for (i = j+1; i > 0; i--)
			{
				printf("#");
			}
			printf("\n");
		}
		
		
	
	
	
	
	
	
	
	
	
	return 0;
}
