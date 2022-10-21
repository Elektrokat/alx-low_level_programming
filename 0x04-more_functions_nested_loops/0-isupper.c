#include "main.h"

/**
  * _isupper - returns uppercase as 1 and 0 if otherwise
  *
  *@c: parameter
  *
  * Return: always 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
