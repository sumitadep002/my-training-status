//10. Write a program to print table of given number.

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number: ");
    scanf("%d",&number);

    for(int i=1;i<=10;i++)
    {
        printf("%3d x %3i = %3d\n",number,i,number*i);
    }

    return 0;
}