#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *@n: input integer
 * Return: No return
 */
int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (n * (-1));
else
return (0);
}
