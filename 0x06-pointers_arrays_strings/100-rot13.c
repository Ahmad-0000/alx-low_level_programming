/**
 * rot13 - is a function to encode *s into rot13
 * @s: a variable sing pointer
 * Return: is to return a pointer to the product sing
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = a2[j];
				break;
			}
		}
		i++;
	}
	return s;
}
