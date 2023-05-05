#include "main.h"

/**
 * clear_bit - 0 is the value of the given bit
 * @n: number to change should be pointed
 * @index: index of the bit to clear
 *
 * Return: success is 1, failure is -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
