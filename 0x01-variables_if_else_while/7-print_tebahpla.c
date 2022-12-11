#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints lowercase in reverse followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar ('\n');
	return (0);
}
