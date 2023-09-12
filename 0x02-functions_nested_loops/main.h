#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c);
void printing_alphabet(void);
