#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
int main(void)

{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');

		round++;
	}
}

