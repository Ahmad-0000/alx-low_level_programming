#include "main.h"
/**
 * myFun - is a recursive fun to find a square root of a if there is
 * @a: is the number to find the square root of
 * @z: is incremented by one each time the function is used
 *
 * Return: is used to return a square root or -1 if there is not
 */
int myFun(int a, int z)
{
	if (z > (a / 2 + 1) || (z * z) > a)
		return (-1);
	else if ((z * z) != a)
		return (myFun(a, z + 1));
	return (z);
}
/**
 * _sqrt_recursion - is a function to pass a value to a function
 * @n: is a number to return the square root of
 * Return: is to return the square root of (n) or -1 if there is not
 */
int _sqrt_recursion(int n)
{
	return (myFun(n, 1));
}
