#include "main.h"

/**
 * get_endianness - find out if machine is little or big endian
 * Return: big is 0, little is 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
