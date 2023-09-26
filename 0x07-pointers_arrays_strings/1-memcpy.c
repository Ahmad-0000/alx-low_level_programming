#include "main.h"
/**
 * _memcpy - is a function to copy a specified memory area (array area)
 * @dest: is a pointer to the array to copy to
 * @src: is a ponter to the array to copy from
 * @n: is the number of the characters from the serie to be copied
 *
 * Return: is to return a pointer to the manipulated array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
