/*
21. Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23
*/
#include<stdio.h>
int main()
{
    int number;

    printf("enter the number: ");
    scanf("%d",&number);
    printf("\n");
    int count=0,flag=0;

    for(int i=number+1;count<=5;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                printf("\nflag == 1");
                break;
            }
        }
        if(flag=0)
        {
        printf(" %d ",i);
        flag = 1;
        printf("\nflag=0");
        count++;
        }
    }
    return 0;
}