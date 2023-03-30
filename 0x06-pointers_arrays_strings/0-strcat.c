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
	
	length1 = 0;
	while (dest[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (src[length2] != '\0')
	{
		dest[length1] = src[length2];
		length1++;
		length2++;
	}
	return (dest);
}
