#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

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
 * print_elf_header - prints out the contents of an elf header
 * @ehdr: pointer to the elf header
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%2.2x ", ehdr->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (ehdr->e_ident[EI_CLASS])
    {
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("Invalid ELF class\n");
        break;
    }

    printf("  Data:                              ");
    switch (ehdr->e_ident[EI_DATA])
    {
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("Invalid ELF data encoding\n");
        break;
    }

    printf("  Version:                           %d\n", ehdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    default:
        printf("<unknown: %#x>\n", ehdr->e_ident[EI_OSABI]);
        break;
    }

    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);

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
    default:
        printf("Invalid ELF type\n");
        break;
    }

    printf("  Entry point address:               %#lx\n", (unsigned long) ehdr->e_entry);
}

/**
 * main - program that displays the information contained in the ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr ehdr;

    /* check for correct usage */
    if (argc != 2)
    {
        print_error_and_exit("Usage: elf_header elf_filename");
    }

    /* open file */
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error_and_exit("Error: Cannot read file");
    }

    /* read ELF header */
    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
    {
        print_error_and_exit("Error: Failed to read ELF header");
    }

    /* check if it is a valid ELF file */
    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
    {
        print_error_and_exit("Error: File is not an ELF");
    }

    /* print ELF header */
    print_elf_header(&ehdr);

    /* close file */
    if (close(fd) == -1)
    {
        print_error_and_exit("Error: Failed to close file");
    }

    return (0);
}
