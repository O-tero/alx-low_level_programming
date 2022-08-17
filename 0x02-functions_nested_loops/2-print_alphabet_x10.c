<<<<<<< HEAD
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return:void
=======
#include "main.h"

/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
>>>>>>> dc6f0d1dc7e257ee2f071a3c2a139e4f58487ced
 */

void print_alphabet_x10(void)
{
<<<<<<< HEAD
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
			i++;
	}
}
=======
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
>>>>>>> dc6f0d1dc7e257ee2f071a3c2a139e4f58487ced
