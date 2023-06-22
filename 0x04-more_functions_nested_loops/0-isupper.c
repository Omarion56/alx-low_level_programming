#include "main.h"

/**
 * main - _isupper.c is a function that checks for uppercase character.
 * function checks if c uppercase return to 1 and return 0 if is not.
 * Return: 1 or 0.
 */

int _isupper(char c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
