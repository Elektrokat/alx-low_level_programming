#include "main.h"

/**
  * _isdigit - returns a digit
  *
  *@c: parameter
  *
  *Return: always 0
  */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		(c >= 'a' && c <= 'z');
	{
		return (0);
	}
}
