#include "main.h"

/**
  * print_last_digit - prints the last digit
  *
  *@n: parameter
  *
  * Return: returns last digit
  */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	if (n < 0)
	{
		lastd = lastd * -1;
	}

	_putchar(lastd + '0');

	return (lastd);
}
