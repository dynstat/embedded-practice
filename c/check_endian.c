#include <stdio.h>
int main()
{
    unsigned int x = 0x76543210;
    int *c = (int *)&x;

    printf("*c is: 0x%X\n", *c); // %X or %x is the format specifier to print in hex
    if (*c == 0x10)              // if (*c == 16) would mean the same
    {
        printf("little endian. \n");
    }
    else
    {
        printf("big endian. \n");
    }

    return 0;
}