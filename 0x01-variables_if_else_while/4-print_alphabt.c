#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'z'))
		putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}
