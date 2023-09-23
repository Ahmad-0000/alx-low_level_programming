#include "main.h"
#include <stdio.h>
/*
 * _islower - is function to determine whether the letter is lowercase or no
 * @c: is the letter to check
 * Return: is to return the value
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
