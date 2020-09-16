#include <stdio.h>

/**
 * main - Prints a string
 * Return: 0
 */


int main(void)
{
char charType;
int intType;
long longType;
long long longlType;
float floatType;
printf("Size of a char:", sizeof(charType));
printf("Size of an int:", sizeof(intType));
printf("Size of a long int:", sizeof(longType));
printf("Size of a long long int:", sizeof(longlType));
printf("Size of a float:", sizeof(floatType));
return (0);
}
