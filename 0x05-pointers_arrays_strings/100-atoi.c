/**
 * _atoi - is a function that is an analog to the standard "atoi" function
 * @s: a pointer to the string containing an embedded integer
 * Return: is to return the integer value
 */

int _atoi(char *s)
{
	int result = 0;
	int multiplyer = 1;
	int i = 0;
	int sign = 0; /* Times of '-' appearance */

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		if (sign % 2 == 0)
		{
			result = result * multiplyer + (s[i] - 48);
		}
		else
		{
			result = result * multiplyer - (s[i] - 48);
		}
		multiplyer = 10;
		i++;
	}
	return result;
}
