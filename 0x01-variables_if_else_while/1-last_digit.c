#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 *Return: always
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
printf("Last digit of %i and is greater than 5/n", n, n%10);

else if (n % 10 == 0)
{
printf("last digit of %i and is 0\n", n, n % 10);
}

else
{
printf("last dig\n", n, n%10);
}

return (0);
}
