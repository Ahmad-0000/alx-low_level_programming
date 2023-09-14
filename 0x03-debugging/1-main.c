#include <stdio.h>

/**
* main - causes an infinite loop
* Return: is a return statement
*/

int main(void)
{
	int i;
	
	printf("Infinite loop incoming :(\n)");

	i = 0;
	/*here starts the while loop*/
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided \\o/\n");

	return (0);
}
