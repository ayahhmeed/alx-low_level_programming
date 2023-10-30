#include "main.h"

#define MAX_BYTES 64

/**
 * print_error_and_exit - prints an error message and exits with error code 98
 * @error_msg: the error message to print
 */
void print_error_and_exit(char *error_msg)
{
	dprintf(STDERR_FILENO, "%s\n", error_msg);
	exit(98);
}

/**
 * print_header_fields - prints out the fields of an ELF header
 * @ehdr: pointer to the elf header
 */
void print_header_fields(Elf64_Ehdr *ehdr)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%0.2x ", ehdr->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
	       ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
	       ehdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid ELF");

	printf("  Data:                              %s\n",
	       ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	       ehdr->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid ELF");

	printf("  Version:                           %u (current)\n", ehdr->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");

	switch (ehdr->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_SORTIX:
		printf("<unknown: 53>\n");
		break;
	default:
		printf("Invalid ELF\n");
		break;
	}

	printf("  ABI Version:                       %u\n", ehdr->e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");

	switch (ehdr->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("Invalid ELF\n");
		break;
	}

	printf("  Entry point address:               %#lx\n", ehdr->e_entry);
}

/**
 * print_elf_header - prints out the contents of an elf header
 * @ehdr: pointer to the elf header
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
	printf("ELF Header:\n");

	print_header_fields(ehdr);
}

/**
 * main - program that displays the information contained in the ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr ehdr;

	/* check for correct usage */
	if (argc != 2)
		print_error_and_exit("Usage: elf_header elf_filename");

	/* open file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error_and_exit("Error: Cannot read file");

	/* read ELF header */
	bytes_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
		print_error_and_exit("Error: Failed to read ELF header");
	if (bytes_read < sizeof(Elf64_Ehdr))
		print_error_and_exit("Error: Invalid ELF header size");

	/* check if it is a valid ELF file */
	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
		print_error_and_exit("Error: File is not an ELF");

	/* print ELF header */
	print_elf_header(&ehdr);

	/* close file */
	if (close(fd) == -1)
		print_error_and_exit("Error: Failed to close file");

	return (0);
}
