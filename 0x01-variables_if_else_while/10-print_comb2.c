#include <stdio.h>

/**
 * main - Prints all the possible combination.
 * Return: 0
 */


int main(void)
{
int i;
for (i = 0; i < 100 ; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i < 99)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
