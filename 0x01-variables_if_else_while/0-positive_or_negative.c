#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	scanf("%d", &n);
	if (n>0)
		printf("%d is positive",n);
	else(n<0)
		printf("%d is negative",n);
	else(n=0)
		printf("%d is zero",n);
	return (0);
}
