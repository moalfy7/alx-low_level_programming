#include "main.h"
#include <stdio.h>
/**
 * main - print Holberton, followed by new line
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}
