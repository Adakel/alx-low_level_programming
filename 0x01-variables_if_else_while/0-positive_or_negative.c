#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The containing function of the c programme
 *          it is positive, negative or zero
 *
 * Return: will return 0 when sucessful
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)						
printf("%d is positive\n", n);}
else if (n < 0)						
printf("%d is negative\n", n);			
else

printf("%d is zero\n", n)

return (0);
}
