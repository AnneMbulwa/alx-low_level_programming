#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(char *ptr);
void print_magic(char *ptr);
void print_class(char *ptr);
void print_data(char *ptr);
void print_version(char *ptr);
void print_OSABI(char *ptr);
void print_abi(char *ptr);
void print_type(int num, char *ptr);
void print_entry(long int x, char *ptr);
void close_elf(int m);

/**
 *check_elf - checks if file is elf or not
 *@ptr: pointer to array containing the magic numbers
 */
void check_elf(char *ptr)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (ptr[i] != 127 &&
		    ptr[i] != 'E' &&
		    ptr[i] != 'L' &&
		    ptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 *print_magic - prints magic numbers in the ELF headers files
 *@ptr: pointer to array that containg elf magic numbers
 */
void print_magic(char *ptr)
{
	int i = 0;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ptr[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 *print_class - specificies if file is 32-bit or 64-bit
 *@ptr: pointer to array that contain ELF CLASS
 *Return: 32 if 32-bit file or 64 if 64-bit file
 */
void print_class(char *ptr)
{
	printf(" %-35s", "Class:");
	if (ptr[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	else if (ptr[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	else
		printf("unknown: %x>\n", ptr[EI_CLASS]);
}

/**
 *print_data - determines the endianness of data in file
 *@ptr: pointer to array containing ELF DATA
 *Return: 0
 */
void print_data(char *ptr)
{
	printf("Data:   ");
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	else if (ptr[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, small endian\n");
		return (0);
	}
	else
		printf("None\n");
	return (0);
}

/**
 *print_version - indicates version of elf format
 *@ptr: pointer to array containing ELF CLASS
 */
void print_version(char *ptr)
{
	printf(" Version:        %d", ptr[EI_VERSION]);
	if (ptr[EI_VERSION] == EV_CURRENT)
		printf("Current\n");
	else
		printf("\n");
}

/**
 *print_OSABI - identifies the O.P and  ABI of ELF file
 *@ptr: pointer to array containing ELF CLASS
 */
void print_OSABI(char *ptr)
{
	printf(" OS/ABI     ");
	switch (ptr[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NeTBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreEBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", ptr[EI_OSABI]);
	}
}

/**
 *print_abi - specifies the ABI version
 *@ptr: poniter to array containing ELF CLASS
 */
void print_abi(char *ptr)
{
	printf(" ABI Version:     %d\n", ptr[EI_ABIVERSION]);
}

/**
 *print_type - specify type of ELF file
 *@num: elf type
 *@ptr: pointer containg ELF CLASS
 */
void print_type(int num, char *ptr)
{
	if (ptr[EI_DATA] == ELFDATA2MSB)
		num >> = 8;
	printf(" Type:   ");

	if (num == ET_REL)
		printf("REL(Relocatable file)\n");
	else if (num == ET_EXEC)
		printf("EXEC(Executable file)\n");
	else if (num == ET_DYN)
		printf("DYN(Shared object file)\n");
	else if (num == ET_CORE)
		printf("CORE(Core file)\n");
	else
		printf("<unknown: %x>\n", num);
}

/**
 *print_entry - indicates memory address where program start
 *@ptr: pointer to array containing ELF CLASS
 *@x: address of ELF entry point
 */
void print_entry(long int x, char *ptr)
{
	printf("  Entry point address:   ");

	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		x = ((x << 8) & 0xFF00FF00) |
			  ((x >> 8) & 0xFF00FF);
		x = (x << 16) | (x >> 16);
	}

	if (ptr[EI_CLASS] == ELFCLASS32)
		printf("%x\n", (int)x);

	else
		printf("%lx\n", x);
}

/**
 *close_elf - closes elf file
 *@m: file desciptor of elf file
 */
void close_elf(int m)
{
	if (close(m) != -1)
		return;
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
	exit(98);
}

/**
 *main - display info contained in ELF
 *@argc: number of arguments
 *@argv: number of array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int y, z;
	Elf64_Ehdr *temp;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	y = open(argv[1], O_RDONLY);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	temp = malloc(sizeof(Elf64_Ehdr));
	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (98);
	}
	z = read(y, temp, sizeof(Elf64_Ehdr));
	if (z == -1)
	{
		free(temp);
		close_elf(y);
		dprintf(STDERR_FILENO, "Error: `%s`: None\n", argv[1]);
		exit(98);
	}

	check_elf(temp->ptr);
	printf("\n");
	print_magic(temp->ptr);
	print_class(temp->ptr);
	print_data(temp->ptr);
	print_version(temp->ptr);
	print_OSABI(temp->ptr);
	print_abi(temp->ptr);
	print_type(temp->num, temp->ptr);
	print_entry(temp->x, temp->ptr);

	free(temp);
	close_elf(y);
	return (0);
}
