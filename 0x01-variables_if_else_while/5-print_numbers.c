#include <stdio.h>

/**
 * main - entry goes here
 *
 * Return: always 0
 */
int main(void)
{
	int z = 0;

	while (z < 10)
	{
	printf("%d", z++);
	}
	putchar('\n');
	return (0);
}
