#include "main.h"
#include <stdlib.h>
/**
 * e - is a function to print error followed by a newline
 *	and exiting with 98
 */
void e(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}
/**
 * isdigits_ - is to check whether the 2 numbers
 *	are whole digits or not
 * @p: is a pointer to the array in which the
 *	numbers are in
 * Return: is to return 1 when yes, 0 when no
 */
int isdigits_(char **p)
{
	int i, j, s = 0;

	for (i = 1; i < 3; i++)
		for (j = 0; p[i][j] != '\0'; j++)
			if (p[i][j] < 48 || p[i][j] > 57)
				s++;
	if (s == 0)
		return (1);
	return (0);
}
/**
 * m - is a function to convert the 2 CLIs to
 *	intergers then printing multiplying them
 * @p: is a pointer to the array in which the 2 arguments are
 * Return: is to return the result of the multiplication
 */
long int m(char **p)
{
	long int j, f = 0, s = 0;

	for (j = 0; p[1][j] != '\0'; j++)
	{
		s *= 10;
		s += p[1][j] - '0';
	}
	for (j = 0; p[2][j] != '\0'; j++)
	{
		f *= 10;
		f += p[2][j] - '0';
	}
	return (f * s);
}
/**
 * printing - is to print the result of the multiplication
 *	of the two arguments
 * @i: is the result of the multiplication.
 */
void printing(long int i)
{
	long j = 0, tmp = i;
	char *p;

	while (tmp)
	{
		tmp /= 10;
		j++;
	}
	p = malloc(sizeof(*p) * (j + 1));
	if (p == NULL)
		e();
	tmp = i;
	j = 0;
	while (tmp)
	{
		p[j] = tmp % 10 + '0';
		tmp /= 10;
		j++;
	}
	p[j] = '\0';
	for (j = j - 1; j >= 0; j--)
		_putchar(p[j]);
	_putchar('\n');
}
/**
 * main - is to multiply two numbers
 * @argc: is the number of cli arguments
 * @argv: is an array of pointers, each to
 *	one argument
 * Return: is to return 0 when success
 */
int main(int argc, char *argv[])
{
	long int i;

	if (argc != 3)
		e();
	if (!(isdigits_(argv)))
		e();
	i = m(argv);
	printing(i);
	return (0);
}
