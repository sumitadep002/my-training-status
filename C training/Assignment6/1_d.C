/*
strcmp()
*/
#include<stdio.h>
bool string_cmp(char *s1,char *s2)
{
    for(int i=0;s1[i]!='\0' && s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        return 0;
    }
    return 1;
}
int main()
{
    char c1[]="Hi There!";
    char c2[]="Hi There!";
    printf("%d",string_cmp(c1,c2));

    return 0;
}