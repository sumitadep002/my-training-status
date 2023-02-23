//strchr() 
#include<stdio.h>
bool string_chr(char *s,char c)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] == c)
        return 1;
    }
    return 0;
}

int main()
{
    char c[] = "sample string";
    printf("%d",string_chr(c,'s'));
    return 0;
}