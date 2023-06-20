#include "main.h"
/**
 *_isalpha - Checks a character, lowercase or uppercase
 *@c: Checked character
 * Return: 1 if lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
