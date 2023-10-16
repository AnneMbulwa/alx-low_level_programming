#include <stdio.h>
/**
 *add - adds two prarmeters
 *@a: first parameter
 *@b: second parameter
 *Return: returns the addition of the 2 parameters
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 *sub - subtracts 2 paramters
 *@a: 1st parajmeter
 *@b: 2nd parameter
 *Return: the diffrence between the parameters
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 *mul - multiples 2 parameters
 *@a: 1st parameter
 *@b: 2nd parameter
 *Return: multiplication of the 2 parameters
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 *div - performs division in the 2 parameters
 *@a: 1st parameter
 *@b: 2nd parameter
 *Return: the qoutient(whole number) after division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division impossible\n");
		return (0);
	}
	return (a / b);
}

/**
 *mod - returns the modulas of 2 given parameters
 *@a: first parameter
 *@b: second parameter
 *Return: mod of the 2 parameters
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division impossible\n");
		return (0);
	}
	return (a % b);
}
