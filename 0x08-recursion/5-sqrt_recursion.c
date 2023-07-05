#include "main.h"
int _sqrt_recursion_helper(int n, int s)
/**
 *_sqrt_recursion - returns the natural square of a number
 *@n: number
 *Return: results of a square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}
/**
 *_sqrt_recursion_helper - recurses to find the square
 *the square of a number
 *@n: number to calculate the square
 *@s: iterator
 *Return: resulting square
 */
int _sqrt_recursion_helper(int n, int s)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (_sqrt_recursion_helper(n, s + 1));
}
