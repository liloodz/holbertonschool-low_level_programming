#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: 0
 */


int main(void)
{
int n;

n = 48;

while (n < 59)
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
