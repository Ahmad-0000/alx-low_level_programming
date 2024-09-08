/**
 * _atoi - is a function that is an analog to the standard "atoi" function
 * @s: a pointer to the string containing an embedded integer
 * Return: is to return the integer value
 */

int _atoi(char *s)
{
	int i, sum, negative;

	i = negative = sum = 0;
	while (s[i])
	{
		if (s[i] == '-')
			negative += 1;
		else if (s[i] >= 48 && s[i] <= 57)
		{
			sum = (sum * 10) + s[i] - 48;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}
	if (negative % 2)
		return (-sum);
	return (sum);
}
