#include "main.h"

/**
  * _isalpha - returns a letter
  *
  * @c: is an ASCII character
  *
  * Return: always 0
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
