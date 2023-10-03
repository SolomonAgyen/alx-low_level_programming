#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

void print_elf_header_info(Elf64_Ehdr *header)
{
printf("ELF Header Information:\n");

/*
 * Identify ELF class (32-bit or 64-bit)
if (header->e_ident[EI_CLASS] == ELFCLASS32)
{
printf("  Class: 32-bit ELF\n");
}
else if (header->e_ident[EI_CLASS] == ELFCLASS64)
{
printf("  Class: 64-bit ELF\n");
}
else
{
printf("  Class: Unknown\n");
}

Identify ELF data encoding (little-endian or big-endian)
if (header->e_ident[EI_DATA] == ELFDATA2LSB)
{
printf("  Data: Little-endian\n");
}
else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
{
printf("  Data: Big-endian\n");
}
else
{
printf("  Data: Unknown\n");
}

Print ELF type
printf("  Type: 0x%x\n", header->e_type);

Print ELF machine architecture
printf(" Machine: 0x%x\n", header->e_machine);

Print entry point address
printf("  Entry point address: 0x%lx\n", (unsigned long)header->e_entry);

Print program header offset
printf("  Program header offset: %lu bytes\n", (unsigned long)header->e_phoff);

Print section header offset
printf("  Section header offset: %lu bytes\n", (unsigned long)header->e_shoff);

Print size of ELF header
printf("  ELF header size: %u bytes\n", header->e_ehsize);

Print size of program header entry
printf("  Program header entry size: %u bytes\n", header->e_phentsize);

Print number of program header entries
printf("  Number of program headers: %u\n", header->e_phnum);

print size of section header entry
printf("  Section header entry size: %u bytes\n", header->e_shentsize);

Print number of section header entries
printf("  Number of section headers: %u\n", header->e_shnum);

Print index of the section header table containing section names
printf("  Section header table index: %u\n", header->e_shstrndx);
}

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
return 1;
}

const char *filename = argv[1];
FILE *file = fopen(filename, "rb");

uif (file == NULL)
{
perror("Error opening file");
return 1;
}

Elf64_Ehdr header;
size_t header_size = sizeof(Elf64_Ehdr);

if (fread(&header, 1, header_size, file) != header_size)
{
perror("Error reading ELF header");
fclose(file);
return 1;
}

print_elf_header_info(&header);
fclose(file);

return 0;
}
