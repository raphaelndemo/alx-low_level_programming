#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet both lower and upper cases
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar (CH);
		CH++;
	}
	putchar ('\n');
	return (0);
}
