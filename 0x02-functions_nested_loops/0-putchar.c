#include <stdio.h>
#include "main.h"

/**
 * main - prints_putchar
 *
 * Description: prints _putchar
 *
 * Retrun: 0 (Success)
 */

int main(void)
{
	char text[9] = "putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}

