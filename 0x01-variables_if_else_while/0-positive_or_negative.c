#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - use if statement and print the variable
*
* Description: using the main function
* this program if statement stored the variable n positive, negative or neutre
* Return: 0
*/

int main(void)
{
        int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there */

	if (n > 0) {
        printf("%d is positive\n", n);
    }
    else if (n < 0) {
        printf("%d is negative\n", n);
    }
    else {
        printf("%d is zero\n", n);
    }

    return 0;
}
