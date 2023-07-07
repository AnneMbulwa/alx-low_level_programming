#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints it name
 * @argc: integer argument
 * @argv: array argument
 * Return: void
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("program name is: %s\n", argv[0]);
	return (0);
}
