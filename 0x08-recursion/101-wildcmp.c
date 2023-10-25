#include "main.h"
char *myFun(char *s);
/**
 * myFun2 - is a function to calculate the length of a string regardless
 *	of the astrisks.
 * @s: is the string.
 * @i: is
 *
 * Return: is the length of the string.
 */
int myFun2(char *s, int i)
{
	if (s[i] == '\0')
		return (0);
	else if (s[i] != '\0' && s[i] == '*')
	{
		i = myFun2(s++, i + 1);
	}
	else if (s[i] != '\0' && s[i] != '*')
		i = 1 + myFun2(s, i + 1);
	return (i);
}
/**
 * myFun - is a function to remove a pointer to the
 *	next not astrisk character.
 * @s: is a pointer to the string
 * Return: is to return an updated version of the pointer s
 *	after moving it
 */
char *myFun(char *s)
{
	if (*s == '*')
		return (myFun(++s));
	return (s);
}
/**
 * wildcmp - is a function to compare two strings regarding
 *	the astrisk wild card.
 * @s1: is a pinter to the first string.
 * @s2: is a pointer to the second string.
 *
 * Return: is to retrun 1 if the two strings are considered identical,
 *	0 otherwis.
 */
int wildcmp(char *s1, char *s2)
{
	int i, j;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
			i = myFun2(s1, 0);
			s2 = myFun(s2);
			j = myFun2(s2, 0);
			s1 += (i - j);
			return (wildcmp(s1, s2));
	}
	else
		return (0);
}
