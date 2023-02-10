#include<stdio.h>
#include<limits.h>
int main()
{
    printf("char %d %%c [%d to %d]",sizeof(char),SCHR_MIN,SCHAR_MAX);
    printf("unsigned %d %%c [%d to %d]",sizeof(unsigned char),0,UCHAR_MAX);
    printf("char %d %%hd [%d to %d]",sizeof(char),CHAR_MIN, CHAR_MAX);
    printf("signed short %d %%hu [%d to %d]",sizeof(unsigned short int),SHRT_MIN, SHRT_MAX);
    printf("unsigned short %d %%d [%d to %d]",sizeof(signed int),0, USHRT_MAX);
    printf("unsigned int %d %%u [%d to %d]",sizeof(unsigned int),0, UINT_MAX);
    printf("signed long int %d %%ld [%d to %d]",sizeof(long int),LONG_MIN, LONG_MAX);
    printf("unsigned long int %d %%lu [%d to %d]",sizeof(unsigned long int),0, ULONG_MAX);
    return 0;
}