#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
    char z = 97;
    while(z <= 122)
    {
        putchar(z);
        z = z+1;
    }
    return(0);
}
