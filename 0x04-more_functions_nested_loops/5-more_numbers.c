#include "main.h"

/**
  * more_numbers - returns nothing
  *
  * Return: 0
  */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar(a);
	}

	_putchar('\n');
}
