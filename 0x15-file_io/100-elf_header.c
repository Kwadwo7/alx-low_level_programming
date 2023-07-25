#include "main.h"

/**
 * ch_elf - checks for elf file
 * @id_ident: points to array containing elf magic numbers
 * Description: exit code if file is not an elf file return (1)
 * Return: 0
 */

int ch_elf(unsigned char *id_ident)
{
	int dex;

	dex = 0;
	while(dex < 4)
	{
		if(id_ident[dex] != 127 && id_ident[dex] != 'E' && id_ident[dex] != 'L' && id_ident[dex] != 'F')
		{
			write(2, "Error: this is not an ELF file\n");
			return (1);
		}
		dex++;
	}
	return (0);
}

/**
 * magic_print - prints magic numbers of ELF header
 * @id_ident: a pointer to array containing ELF header
 * Descripton: magic numbers are separated by spaces
 * Return: 0
 */

int magic_print(unsigned char *id_ident)
{
	int dex;

	printf("Magic:");
	dex = 0;
	while(dex < EL_NIDENT)
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
 * @id_ident: a pointer to array containing ELF header
 * Return: 0
 */

int class_print(unsigned char *id_ident)
{
	write(1, "Class: ", 7);
	
	switch(id_ident[EL_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF64\n");
			break;
		default:
			printf("entry unknown");
	}
	return (0);
}

