#include <stdio.h>
/**
 * main - is a function to print the name of the file
 *	which the program was compiled from
 * Return: is to return 0 when success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
