#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a function to print its optcode up to j bytes
 * @argc: is the number of the command line arguments
 * @argv: is an array of pointers, each of which points to the
 *	corresponding argument
 * Return: is to return 0 when success
 */
int main(int argc, char *argv[])
{
	unsigned char *p;
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < j; i++)
		printf(i + 1 == j ? "%02x\n" : "%02x ", p[i]);
}
