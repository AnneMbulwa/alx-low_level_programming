#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - add 2 numbers
 *@a: first number
 *@b: second number
 *Return: sum od a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a: first number
 *@b: second number
 *Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiples two numbers
 *@a: 1st number
 *@b: 2nd number
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *@a: 1st number
 *@b: 2nd number
 *Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - divides two numbers and returns the remainder
 *@a: 1st number
 *@b: 2nd number
 *Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
