#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
void create_file(const char *filename, char *text_content);
void append_text_to_file(const char *filename, char *text_content);
void ch_elf(unsigned char *e_ident);
void magic_print(unsigned char *e_ident);
void class_print(unsigned char *e_ident);
void data_print(unsigned char *e_ident);
void version_print(unsigned char *e_ident);
void osabi_print(unsigned char *e_ident);
void abi_print(unsigned char *e_ident);
void type_print(unsigned int e_type, unsigned char *e_ident);
void entry_print(unsigned long int e_entry, unsigned char *e_ident);
void elf_close(int elf);

#endif
