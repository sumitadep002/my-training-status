//18. Write a program to print the tables of the numbers from 1 to 10.

#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf(" %d",i*j);
            if(i*j<10)
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}