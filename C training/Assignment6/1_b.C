/*
b. strcpy()
*/
#include<stdio.h>
void string_copy(char *s1,char *s2)
{
    for (int i=0;s1[i]!='\0';i++)
    {
        s2[i]=s2[i];
    }
    
}
int main()
{
    char c1[]={"rainbow is natural phenomenon"};
    char c2[]={};
    string_copy(c1,c2);
    printf("%s",c2);
    return 0;
}