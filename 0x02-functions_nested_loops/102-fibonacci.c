#include <stdio.h>

/**
 * main - main block
 * Description: prints even numbers less than 4,000,000
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int i = 0;
long int a = 0, b = 1, next;

while (i < 50)
{
next = a + b;
a = b;
b = next;
printf("%lu", next);

if (i < 49)
{
printf(",");
}
i++;
}
putchar('\n');
return (0);
}
