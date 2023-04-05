/**
  * _pow_recursion - Returns the value of x power y
  * @x: the value to multiply
  * @y: the times to multiply the value
  * iPatos
  * Return: the value power y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
