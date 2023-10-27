#include <stdio.h>
/**
 * main - is my main function that can be used to
 *	print the program name
 *@argc: is the number arguments that are passed to the program
 *@argv: is an array of pointers, each of which points
 *	to an argument from the command line
 *
 * Return: is to return 1
 */
int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s\n", argv[0]);
			return (0);
}
