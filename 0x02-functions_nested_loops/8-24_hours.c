#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int x, y, z, d;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}
