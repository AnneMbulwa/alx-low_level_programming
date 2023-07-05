#include "main.h"

int actual_prime(int n, int i);

/**
 *is_prime_number - calculates prime numbers
 *@n: number to evaluate
 *Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 *actual_prime - calculates number if prime
 *@n: evaluated numbr
 *@i: iterator
 *Return: 1 if prime and 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
