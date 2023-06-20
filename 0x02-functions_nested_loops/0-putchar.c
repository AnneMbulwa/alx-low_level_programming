#include "main.h"
#include <unstd.h>
/**
 * main -  program that prints _putchar
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
