#include "main.h"

/**
 * ch_elf - checks for elf file
 * @e_ident: points to array containing elf magic numbers
 * Description: exit code if file is not an elf file return (1)
 * Return: 0
 */

int ch_elf(unsigned char *e_ident)
{
	int dex;

	dex = 0;
	while(dex < 4)
	{
		if(e_ident[dex] != 127 && e_ident[dex] != 'E' && e_ident[dex] != 'L' && e_ident[dex] != 'F')
		{
			write(2, "Error: this is not an ELF file\n", 30);
			return (1);
		}
		dex++;
	}
	return (0);
}

/**
 * magic_print - prints magic numbers of ELF header
 * @e_ident: a pointer to array containing ELF header
 * Descripton: magic numbers are separated by spaces
 * Return: 0
 */

int magic_print(unsigned char *e_ident)
{
	int dex;

	printf("Magic:");
	dex = 0;
	while(dex < EI_NIDENT)
	{
		printf("%02x", id_ident[dex]);
		if(dex == EL_NIDENT -1)
			printf("\n");
		else
			printf(" ");
		dex++;
	}
	return (0);
}

/**
 * class_print - prints the class of an ELF header.
 * @e_ident: a pointer to array containing ELF header
 * Return: 0
 */

int class_print(unsigned char *e_ident)
{
	write(1, "Class: ", 7);
	
	switch(id_ident[EL_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
	return (0);
}

/**
 * data_print - prints the data of an ELF header.
 * @e_ident: a pointer to an array containing the ELF class.
 * Return: 0
 */

int data_print(unsigned char *e_ident)
{
	printf("Data: ");

	switch(e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>n", e_ident[EI_CLASS])
	}
	return(0);
}


/**
 * version_print - prints the version of an ELF header
 * @e_ident: A pointer to an array containing the ELF version
 * Return: 0 for success
 */

int version_print(unsigned char *e_ident)
{
	printf("Version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
	return(0);
}


/**
 * osabi_print - prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version
 * Return: 0 for success
 */

int osabi_print(unsigned char *e_ident)
{
	printf("OS/ABI: ");

	switch(e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX -NetBSD\n");
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
			printf("UNIX - FreeBSD\n");
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
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
	return (0);
}

/**
 * abi_print - prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 * Return: 0 for success
 */

int abi_print(unsigned char *e_ident)
{
	printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * type_print - prints the type of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class
 * e_type: The ELF type.
 * Return: 0 for success.
 */

int type_print(unsigned int e_type, unsigned char *e_ident)
{
	if(e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("Type: ");

	switch(e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
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
			printf("<unknown: %x>\n", e_type);
	}
	return (0);
}

/**
 * entry_print - prints the entry point of an ELF file
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class
 * Return: 0 for success
 */

int entry_print(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address:");
	
	if(e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
		if(e_ident[EI_CLASS] == ELFCLASS32)
			printf("%#x\n", (unsigned int)e_entry);
		else
			printf("%#lx\n", e_entry);
	return(0);
}

/**
 * elf_close - closes an ELF file
 * @elf: The file descriptor of the ELF file.
 * Description: if the file cannot be closed - exit code 98.
 * Return: 0 for success
 */

int elf_close(int elf)
{
	if(close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
	return(0);
}


/**
 * main - Displays the information contained in the ELF header
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Description: if the file is not an ELF file, the function fails
 * Return: 0 for success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int i,j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(EIf64_Ehdr));
	if(header == NULL)
	{
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	i = read(o, header, sizeof(EIf64_Ehdr));
	if(r == -1)
	{
		free(header);
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
		exit(98);
	}
	
	elf_check(header->e_ident);
	printf("ELF Header:\n");
	magic_print(header->e_ident);
	class_print(header->e_ident);
	data_print(header->e_ident);
	version_print(header->e_ident);
	osabi_print(header->e_ident);
	abi_print(header->e_ident);
	type_print(header->e_type, header->e_ident);
	entry_print(header->e_entry, header->e_ident);
	free(header);
	close_elf(i);
	return(0);
}


