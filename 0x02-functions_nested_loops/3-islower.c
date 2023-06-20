#include "main.h"
/**
 *int_islower(int c) - checks for lowercase characters
 * Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
