#include "main.h"

/**
  * print_alphabet - prints lowercase alphabet
  *
  * Description: an empty function
  *
  * Return: always 0
  */
int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');

	return (0);
}
