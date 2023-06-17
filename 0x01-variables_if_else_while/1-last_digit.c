#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - if statement
*
* Description: using the main function
* this program prints the last digit
* Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if ((n % 10) > 5){
        printf("the string %d and is greater than 5\n",n % 10);
	} else if ((n % 10) == 0){
	    printf("the string %d and is 0\n",n % 10);
	} else {
	    printf("the string %d and is less than 6 and not 0\n",n % 10);
	}


	return (0);
}
