/*
Write a program to demonstrate use of string library functions
c. strcat() 
*/
#include<stdio.h>
void string_cat(char *s1,char *s2)
{
    int i;
    for(i=0;s1[i]!='\0';i++);
    s1[i]=32;
    i++;
    for(int j=0;s2[j]!='\0';j++,i++)
    {
        s1[i]=s2[j];
    }
}
int main()
{
    char c1[]={"rainbow is a natural phenomenon"};
    char c2[]={"and it is beautifull"};

    string_cat(c1,c2);
    printf("%s",c1);
    

    return 0;
}