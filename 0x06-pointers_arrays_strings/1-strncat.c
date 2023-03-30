#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char* _strncat(char* dest, char* src, int n)
{
    int i, len1 = 0, len2 = 0;

    while (dest[len1] != '\0' || src[len2] != '\0')
    {
        if (dest[len1] != '\0')
            len1++;
        if (src[len2] != '\0')
            len2++;
    }
    for (i = 0; i < len2 && i < n; i++)
    {
        dest[len1] = src[i];
        len1++;
    }
    return (dest);
}
