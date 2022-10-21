#include "main.h"

/**
  * more_numbers - returns nothing
  *
  * Return: 0
  */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 14 ; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			_putchar(b);
		}
		_putchar(a);
	}

	_putchar('\n');
}
