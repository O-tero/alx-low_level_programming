#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
