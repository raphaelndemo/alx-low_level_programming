#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}
