#include "main.h"

int _isalpha(int c)
{
	if (c < 65 || c > 122 || c == 91 || c == 92 || c == 93 || c = 94 || c == 95 || c == 96)
		return (0);
	else
		return (1);
}
