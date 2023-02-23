/*
strrev()
*/
#include<stdio.h>
void string_rev(char *s)
{
    int length,temp;
    for(int length=0;s[length]!='\0';length);
    for(int j=0;j<length/2;j++)
    {
        temp=s[j];
        s[j]=s[length-1-j];
        s[length-1-j]=temp;
    }
}
int main()
{
    char c[]="this is sample string";
    printf("%s",c);
    string_rev(c);
    printf("\n%s",c);
    return 0;
}