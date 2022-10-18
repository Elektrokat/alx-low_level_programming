#include "main.h"

/**
  * _abs - absolute value of a number
  *
  * @n: ASCII value
  *
  * Return: absolute value of the number
  */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
