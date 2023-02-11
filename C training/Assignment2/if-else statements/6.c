/*
Write a program to accept a 5 digit number and check whether it is a numeric palindrome. 
(If reversed number is same as entered number it is called palindrome)
*/

#include<stdio.h>
int main()
{

    int number=0,temporary_number=number,reversed_number;

    printf("enter a 5 digit number: ");
    scanf("%d",&number);

658
    for(temporary_number=number,reversed_number=0;  temporary_number!=0;  temporary_number/=10)
    {
        reversed_number = reversed_number*10 + temporary_number%10;
    }

    if(number==reversed_number)
    printf("\nit is a pelindrome number");
    else
    printf("\nit is a pelindrome number");

    return 0;
}