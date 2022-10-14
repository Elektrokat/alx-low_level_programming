#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
	putchar(y);
	}
	putchar('\n');

	return (0);
}
