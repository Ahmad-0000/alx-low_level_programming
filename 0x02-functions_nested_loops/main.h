#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c);
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
