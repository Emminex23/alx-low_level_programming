#include "main.h"
#include <stdio.h>
/**
 * exit_with_error - exits and prints appropriate errno
 * @msg: pointer to msg
 *
 * Return: Nothing
 */
void exit_with_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 at success
 */
int main(int argc, char *argv[])
{
	int fd, i;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		exit_with_error("Unable to open file.");

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read < (ssize_t)sizeof(Elf64_Ehdr))
		exit_with_error("Unable to read ELF header.");

	if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' ||
	header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		exit_with_error("Not an ELF file.");
	}

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x ", header.e_ident[i]);
	printf("\n");

	printf("Class:                             ELF64\n");
	printf("Data:                              2's complement, little endian\n");
	printf("Version:                           1 (current)\n");
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       0\n");
	printf("Type:                              %d\n", header.e_type);
	printf("Entry point address:               0x%lx\n", header.e_entry);

	close(fd);
	return (0);
}
