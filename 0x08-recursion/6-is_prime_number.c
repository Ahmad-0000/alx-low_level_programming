#include "main.h"
/**
 * myFun - is a function to find if a number is prime or not
 * @myNum: is the number to be checked
 * @i: is to divide myNum with until it is equal to or gereater
 *	that the half of myNum
 *
 * Return: is to return 0 if the myNum is not prime or 1 if it is prime
 */
int myFun(int myNum, int i)
{
	if (myNum == 1 || myNum == 4)
		return (0);
	else if (myNum < 0)
		return (0);
	else if (myNum == 2 || myNum == 3)
		return (1);
	else if (i >= (myNum / 2))
		return (1);
	else if (!(myNum % i))
		return (0);
	return (myFun(myNum, i + 1));
}
/**
 * is_prime_number - is a function to pass a number to myFun
 * @n: is the number to be passed
 * Return: is to return 1 if n is prime or 0 if it is not
 */
int is_prime_number(int n)
{
	return (myFun(n, 2));
}
