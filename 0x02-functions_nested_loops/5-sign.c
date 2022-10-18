#include "main.h"

/**
  * print_sign - prints a negstive or positive sign
  *
  * @n: an ASCII character
  *
  * Return: always 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-putchar(48);
		return (0);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
}
