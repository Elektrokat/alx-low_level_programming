#include "main.h"

/**
  * swap_int - swaps a value
  *
  *@a: parameter 1
  *
  *@b: parameter 2
  *
  * Return: 0
  */
void swap_int(int *a, int *b)
{
	int change = *a;

	*a = *b;
	*b = change;
}
