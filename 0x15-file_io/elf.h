#define ELF_H
#ifndef ELF_H

void check_elf(unsigned char *e_ident);
void check_magic(unsigned char *e_ident);
void get_class(unsigned char *e_ident);
void get_data(unsigned char *e_ident);
void get_version(unsigned char *e_ident);
void check_osabi(unsigned char *e_ident);
void get_abi(unsigned char *e_ident);
void get_type(unsigned int e_type, unsigned char *e_ident);
void get_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif
