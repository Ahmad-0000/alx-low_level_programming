#include <stdio.h>
/**
 * main - is my main function to do the FizzBuzz program
 * Return: is to return a value
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i < 100)
			printf("%d ", i);
		else
			printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
