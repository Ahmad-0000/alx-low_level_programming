#include <stdio.h>

/**
 * main - printing the sum of natural numbers divisible by 3 or 5 under 1024
 * Return: is to return 0
 */

int main(void)
{
	int i, total;

	total = 0;
	i = 3;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
		i++;
	}
	printf("%d\n", total);
	return 0;
}
