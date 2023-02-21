/*
1. Write a program to demonstrate use of string library functions. 
a. strlen() 
*/
#include<stdio.h>
int string_length(char *c)
{
    int l;
    for(l=0;c[l]!='\0';l++);
    return l;
}
int main()
{
    char c1[]="rainbow is natural phenomenon";
    printf("length of c1 is %d",string_length(c1));
    

    return 0;
}