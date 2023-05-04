#include "main.h"
/**
 * get_endianness - Checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int x = 0x12345678;
unsigned char *byte_pointer = (unsigned char *)&x;

return (*byte_pointer == 0x78);
}

