#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int s)
{
	int x = s % 10;
	printf("%d", x);
	return (x);
}
