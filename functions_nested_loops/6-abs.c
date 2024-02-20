#include "holberton.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int c)
{
	if (c < 0)
	{
		int absVal;

		absVal = c * -1;

		return (absVal);
	}

	return (c);
}

