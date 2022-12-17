#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*betty style doc main function*/
/**
 * main = main block
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes on*/
	if (n > 0)
		printf("%i is postive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
