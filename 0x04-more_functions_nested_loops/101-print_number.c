/**
 * print_number - is a function to print @n
 * @n: is a number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n -= n;
	}
	do {
		_putchar((n % 10) + '0');
		n /= 10;	
	} while (n);
	_putchar('\n');
}
