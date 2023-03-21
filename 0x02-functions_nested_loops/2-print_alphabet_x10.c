#include"main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 1; i <= 10; i++)
	{
	alpha = 'a';
	while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
		putchar('\n');
	}
}
