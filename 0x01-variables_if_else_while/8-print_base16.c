#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
int n;

n = 48;
while (n < 58)
{
putchar(n);
n++;
}
n = 97;
while (n < 103)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
