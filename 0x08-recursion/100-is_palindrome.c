#include "main.h"
/**
 * myFun2 - is a function to find whether a string is palindrome or not
 * @c: is a pointer to the string
 * @i: is the length of the string
 * @j: is 0, and is incremented each time in the function recursion
 *
 * Return: is to return 1 if a string is a palindrome or 0 when it is not
 */

int myFun2(char *c, int i, int j)
{
	if (c[j] == '\0')
		return (1);
	else if (c[j] == c[i])
		return (myFun2(c, i - 1, j + 1));
	else
		return (0);
}

/**
 * myFun - is a function to find the length of a string
 *	to pass it to myFun2
 * @c: is a pointer to the string
 * @i: is 0 and is incremented each time until
 *	the null terminator is reached
 *
 * Return: is to return the length of the string
 */
int myFun(char *c, int i)
{
	if (!c[i])
		return (0);
	return (1 + myFun(c, i + 1));
}
/**
 * is_palindrome - is a function to the start the process of
 *	checking if a string is a palindrome or not.
 * @s: is the string.
 * Return: is to return 1 if the string is, or 0
 *	if the string is not
 */
int is_palindrome(char *s)
{
	int i;

	i = myFun(s, 0);
	return (myFun2(s, i - 1, 0));
}
