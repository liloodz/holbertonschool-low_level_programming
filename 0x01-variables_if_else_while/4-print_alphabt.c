#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{

char ch;
for (ch = 'a'; ch <= 'z';)
{
if ((ch == 'e') || (ch == 'q'))
{
ch++;
}
else
{
putchar(ch);
ch++;
}
}
putchar('\n');
return (0);
}
