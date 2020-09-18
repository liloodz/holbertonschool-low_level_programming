#include <stdio.h>

/**
 * main - Prints all the possible combination.
 * Return: 0
 */


int main(void)
{
int n;
n = 48;
while (n < 58)
{
putchar(n);
if (n < 57)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');
return (0);
}
