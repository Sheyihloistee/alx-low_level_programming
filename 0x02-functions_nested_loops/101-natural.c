#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 *
 * Return: Always 0
 */

int main(void)
{
int c = 0; sum = 0;

for (c = 0; i < 1024; c++)
{
if ((c % 3 == 0 || (c % 5) == 0)
sum += c;
}

printf("%d\n", sum);
return (0);
}

