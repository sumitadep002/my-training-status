//Write a program to accept number and check whether the number is +ve, -ve and zero

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number: ");
    scanf("%d",&number);

    if(number!=0)
    {
        if(number>0)
        printf("number %d is positive",number);

        else
        printf("number %d is negative",number);
    }
    else 
    printf("number %d is zero",number);

    return 0;
}