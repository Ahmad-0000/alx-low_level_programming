#include "main.h"
/**
 * _strstr - i
 * @haystack: a
 * @needle: a
 *
 * Return: is a return
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, *n;

	p = haystack;
	n = needle;
	if (p[1] == haystack[1])
	{
		p++;
	}
	if (n[1] == needle[1])
	{
		n++;
	}
	return (p);
}
