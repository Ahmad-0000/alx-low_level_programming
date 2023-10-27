#include <stdio.h>
#include <stdlib.h>
int myFun(int);

/**
 * main - is the function that recives a number (argv[1]) from the command
 *	line and passes it to myFun if it is greater than 0.
 * @argc: is the number of arguments + 1 that the main recieves
 * @argv: is an array of pointers, each of which points to one
 *	of the arguments and argv[0] to the program name
 *
 * Return: is to return 1 if there is no number or there
 *	is more than one number
 */
int main(int argc, char *argv[])
{
	int i, s = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i > 0)
		s = myFun(i);
	printf("%d\n", s);
	return (0);
}
/**
 * myFun - is a function that recives the a number (money) from main
 *	and returns the minimum number of coins to make change
 *	for an amount of the money.
 * @i: is the amount of money.
 * Return: is to return the minimum number of coins to main
 *	to be printed
 */
int myFun(int i)
{
	int tmp, s = 0;

	while (i)
	{
		if (i > 24)
		{
			tmp = i / 25;
			i %= 25;
		}
		else if (i > 9)
		{
			tmp = i / 10;
			i %= 10;
		}
		else  if (i > 4)
		{
			tmp = i / 5;
			i %= 5;
		}
		else if (i > 1)
		{
			tmp = i / 2;
			i %= 2;
		}
		else if (i > 0)
		{
			tmp = 1;
			i = 0;
		}
		s += tmp;
	}
	return (s);
}
