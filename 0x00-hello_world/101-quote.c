#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char wr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; wr[i] != '\0'; i++)
	{
		putchar(wr[i]);
	}
	putchar('\n');
	return (0);
}
