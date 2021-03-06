#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: input number.
 * @index: input index.
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
