#include "main.h"

int _strlen_recursion(char *s);
int is_palindrome_helper(char *s, int i, int len);

/**
 *is_palindrome - function that returns a string if palindrome
 *@s: string
 *Return: 1 if string is palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palindrome_helper(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - checks and returns the length of string
 *@s: string
 *Return:length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome_helper - check the characters recursively for palindrome
 *@len: length of string
 *@i: iterator
 *@s: string
 *Return: 1 if string is palindrome and 0 otherwise
 */
int is_palindrome_helper(char *s, int i, int len)
{
	if (*(s + i) != *(s + (len - 1)))
		return (0);
	if (i >= len)
		return (1);
	return (is_palindrome_helper(s, i + 1, len - 1));
}
