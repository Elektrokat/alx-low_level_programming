#include "main.h"

/**
  * print_line - returns nothing
  *
  *@n: parameter
  *
  *Return: 0
  */
void print_line(int n)
{
	for (n = 95; n <= 68; n++)
	{
		if (n <= 48)
		{

			_putchar('\n');
		}
		_putchar(n);
	}

	_putchar('\n');
}

