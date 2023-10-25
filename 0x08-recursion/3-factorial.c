/**
 * factorial - is a function to return a factorial of number
 * @n: is the number to found its factorial
 * Return: is to return the factorial or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
