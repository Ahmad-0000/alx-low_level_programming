#include <stdio.h>
#define LINE_LENGTH 24

/**
 * print_buffer - is a function to a buffer in the following format:
 *	* it prints the content of sz bytes of @b
 *	* 10 bytes per line
 *	* Line starts with the position its first byte in hexadecimal
 *	* Line has the hexadecimal content (2 chars) of @b, 2 bytes at a time
 *	* Line has the content of @b: printable => as it is, otherwise .
 *	* Each line ends with a new line \n
 *	* If sz is 0 or less, the output should be a new line only \n
 * @b: a pointer to the buffer
 * @sz: the size of the buffer to be printed
 */

void print_buffer(char *b, int sz)
{
	int i, j, k, ll, sp, unprintable[33];

	for (i = 0; i < 32; i++)
		unprintable[i] = i;
	unprintable[i] = 127;
	if (sz <= 0)
		putchar('\n');
	for (i = 0; i < sz; i += 10)
	{
		ll = 0;
		printf("%08x: ", i);
		for (j = i, sp = 1; (j < 10 + i) && j < sz; j++, sp++, ll += 2)
		{
			if (!(sp % 3))
			{
				putchar(' ');
				sp = 1;
				ll++;
			}
			printf("%02x", b[j]);
		}
		putchar(' ');
		for (; ll < LINE_LENGTH; ll++)
			putchar(' ');
		for (j = i; j < (10 + i) && j < sz; j++)
		{
			for (k = 0; k < 33; k++)
				if (b[j] == unprintable[k])
				{
					putchar('.');
					break;
				}
			if (k == 33)
				putchar(b[j]);
		}
		putchar('\n');
	}
}
