#include "main.h"

/** 
 * strlen_recursion : function prints the length of a string
 * return : length of a string
 */

int _strlen_recursion(char *s)
{
int leng = 0;
if (*s)
{
leng++:
leng = leng + _strlen_recursion(s+1);
}
return (leng);
}
