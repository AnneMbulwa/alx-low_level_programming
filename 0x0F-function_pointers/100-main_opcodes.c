#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the opcode of its main function
 *@argc: number of arguments
 *@argv: number of array arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int bytes;
	char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", opcodes[i]);
			break;
		}
		printf("%02hhx", opcodes[i]);
	}
	return (0);
}
