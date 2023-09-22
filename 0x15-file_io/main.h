#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#define EI_NIDENT 16

typedef struct {
    unsigned char e_ident[EI_NIDENT];  /* Magic number and other info */
    unsigned short e_type;             /* Object file type */
    unsigned short e_machine;          /* Architecture */
    unsigned int e_version;            /* Object file version */
    unsigned long e_entry;             /* Entry point virtual address */
} Elf64_Ehdr;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
