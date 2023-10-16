#include "main.h"
/**
 *_isalpha - Checks a character, lowercase or uppercase
 *@c: Checked character
 * Return: 1 if lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
