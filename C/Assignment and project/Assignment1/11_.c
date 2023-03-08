/*
Write a program to determine the ranges of char, short, int, and long variables, both signed and 
unsigned, by printing appropriate values from standard headers. 
Do not use spaces to align table columns.
*/
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Type               Size (bytes)  Format Specifier  Range\n");
    printf("----------------------------------------------------------\n");
    printf("char               %3u           %%c               %-12d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char      %3u           %%c               %-12u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("short              %3u           %%hd              %-12d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short     %3u           %%hu              %-12u\n", sizeof(unsigned short), USHRT_MAX);
    printf("int                %3u           %%d               %-12d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int       %3u           %%u               %-12u\n", sizeof(unsigned int), UINT_MAX);
    printf("long int           %3u           %%ld              %-12ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long int  %3u           %%lu              %-12lu\n", sizeof(unsigned long), ULONG_MAX);
    return 0;
}