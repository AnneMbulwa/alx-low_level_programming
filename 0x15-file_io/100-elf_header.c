/*format same as readelf -h (version 2.26.1)*/

/*ELF header(Executable and Linkable format*/
/*used in unix-like O.S for executable/shared libaries & object file*/
/*Elf header os located at begging of an elf file*/

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int m);

/**
 *check_elf - checks if file is elf or not
 *helps in distinguishing elf file from others
 *@e_ident: pointer to array containing the magic numbers
 */
void check_elf(unsigned char *e_ident)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 *print_magic - prints magic numbers in the ELF headers files
 *sets bytes to identify files as elf files
 *@e_ident: pointer to array that containg elf magic numbers
 */
void print_magic(unsigned char *e_ident)
{
	int i = 0;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 *print_class - specificies if file is 32-bit or 64-bit
 *@e_ident: pointer to array that contain ELF CLASS
 *
 */
void print_class(unsigned char *e_ident)
{
	printf(" %-35s", "Class:");
	if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else
		printf("unknown: %x>\n", e_ident[EI_CLASS]);
}

/*endianess - bytes order by which data is sored in computer memory*/
/*little-endianess and big-endianess*/

/**
 *print_data - determines the endianness of data in file
 *@e_ident: pointer to array containing ELF DATA
 *
 */
void print_data(unsigned char *e_ident)
{
	printf("Data:   ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, small endian\n");
	}
	else
		printf("None\n");
}

/**
 *print_version - indicates version of elf format used
 *@e_ident: pointer to array containing ELF CLASS
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:        %d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("Current\n");
	else
		printf("\n");
}

/**
 *print_osabi - identifies the O.P and  ABI of ELF file
 *@e_ident: pointer to array containing ELF CLASS
 *Description: ABI (application binary interface)
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI:	");
	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NeTBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] ==  ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] ==  ELFOSABI_FREEBSD)
		printf("UNIX - FreEBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 *print_abi - Specifies the ABI version
 *@e_ident: poniter to unsigned character of array containing ELF CLASS
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version:		%d\n", e_ident[EI_ABIVERSION]);
}

/**
 *print_type - Specify type of ELF file
 *@e_type: unsigned elf type
 *@e_ident: pointer to unsigned character of array containg ELF CLASS
 *Description: types of elf files are executable, shared or relocatable
 *
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type:	");

	if (e_type == ET_NONE)
		printf("NONE\n");
	else if (e_type == ET_REL)
		printf("REL(Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC(Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN(Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE(Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 *print_entry - Indicates memory address where program start
 *@e_ident: pointer to unsigned charcacter of array containing ELF CLASS
 *@e_entry: address of unsigned  ELF entry point
 *Description: entry point access
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:	");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%x\n", (unsigned int)e_entry);

	else
		printf("%lx\n", e_entry);
}

/**
 *close_elf - Closes elf file
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
*main - Display information(s) contained in ELF
 *@argc: number of arguments
 *@argv: number of array of arguments
 *Description: use lseek once
 * use read a maximum of 2 times at runtime
 * allowed to use printf function
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int y, z;
	Elf64_Ehdr *ptr;

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
	ptr = malloc(sizeof(Elf64_Ehdr));
	if (ptr == NULL)
	{
		close_elf(y);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	z = read(y, ptr, sizeof(Elf64_Ehdr));
	if (z == -1)
	{
		free(ptr);
		close_elf(y);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		return (98);
	}

	check_elf(ptr->e_ident);
	printf("ELF Header:\n Magic:	");
	print_magic(ptr->e_ident);
	print_class(ptr->e_ident);
	print_data(ptr->e_ident);
	print_version(ptr->e_ident);
	print_osabi(ptr->e_ident);
	print_abi(ptr->e_ident);
	print_type(ptr->e_type, ptr->e_ident);
	print_entry(ptr->e_entry, ptr->e_ident);

	free(ptr);
	close_elf(y);
	return (0);
}
