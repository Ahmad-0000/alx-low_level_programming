/**
 * rot13 - is a function to encode *s into rot13
 * @s: a variable sing pointer
 * Return: is to return a pointer to the product sing
 */

char *rot13(char *s)
{
	int i, j;
	char a[2][26] = {
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
			"abcdefghijklmnopqrstuvwxyz"
	};
	char a2[2][26] = {
			"NOPQRSTUVWXYZABCDEFGHIJKLM",
			"nopqrstuvwxyzabcdefghijklm"
	};

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == a[0][j])
			{
				s[i] = a2[0][j];
				break;
			}
			else if (s[i] == a[1][j])
			{
				s[i] = a2[1][j];
				break;
			}
		}
		i++;
	}
	return s;
}
