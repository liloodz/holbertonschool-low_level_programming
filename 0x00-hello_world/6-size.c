#include <stdio.h>

/**
 * main - Prints a string
 * Return: 0
 */


int main(void)
{
char charType;
int intType;
long int longType;
long long int longlType;
float floatType;
printf("Size of a char: %ld bytes\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longType));
printf("Size of a long long int: %ld bytes\n", sizeof(longlType));
printf("Size of a float: %ld bytes\n", sizeof(floatType));
return (0);
}
