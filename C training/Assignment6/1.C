/*
1. Write a program to demonstrate use of string library functions. 
a. strlen() 
b. strcpy() 
c. strcat() 
d. strcmp() 
e. stricmp() 
f. strrev() 
g. strchr() 
h. strstr() 
i. strncpy() 
j. strncat() 
k. strncmp() 
l. strtok()
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char c1[]="rainbow is natural phenomenon";
    char c2[]="earth is 4.5 billion year old";
    char c[]={};
    printf("\nlength of c1 and c2 string is %d and %d",strlen(c1),strlen(c2));
    strcpy(c,c2);
    strcat(c1,c2);
    strcmp(c1,c2);
    printf("\nc1 :%s",strrev(c1));
    

    return 0;
}