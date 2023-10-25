/**
 * _pow_recursion - is a function to return the value of
 * 	 (x to the power y)
 * @x: is the base.
 * @y: is the power.
 *
 * Return: is to return either the result or (-1) if y < 0
 * 	or (1) if y is equal to 0;
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
