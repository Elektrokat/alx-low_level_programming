#include "main.h"

/**
  * _strlen - length of a string
  *
  *@s: parameter
  *
  * Return: 0
  */
int _strlen(char *s)
{
	int boy = 0;

	while (*s++)
		boy++;

	return (boy);
}
