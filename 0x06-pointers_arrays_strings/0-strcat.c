#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char* _strcat(char* dest, char* src)
{
	int length1;
	int length2;
	int z;
	int i;
	
	length1 = 0;
	while (dest[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (src[length2] != '\0')
	{
		length2++;
	}
	z = 0;
	for (i = length1 + 1; i < length2; i++)
	{
		dest[i] = src[z]; 
		z++;
	}
	return (dest);
}
