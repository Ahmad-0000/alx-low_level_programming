#include <stdio.h>

/**
* main - causes and infinite loop in a prticular case
* Return: is a return 
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10) /*A while loop without an increment*/
	{
		putchar(i);
	}

	printf("Infinite loop was avoided \\o/\n");

	return (0);
}
