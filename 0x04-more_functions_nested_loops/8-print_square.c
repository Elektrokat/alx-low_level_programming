#include "main.h"

/**
  * print_square- prints squares
  *
  * @size: parameter dor size of the square
  *
  *Return: 0
  */
void print_square(int size)
{
	int x;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= size; x++)
		{
			_putchar(35);
		}
	}

	_putchar('\n');
}
