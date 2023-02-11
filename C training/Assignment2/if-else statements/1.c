/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/

#include<stdio.h>
int main()
{
    float first_number,second_number;

    printf("enter first number :");
    scanf("%f",&first_number);

    printf("enter second number :");
    scanf("%f",&second_number);

    printf("\nfirst_number/second number %f",first_number/second_number);

    printf("\nsecond_number/first_number %f",second_number/first_number);


    return 0;
}


// whenever i try to divide a number by 0 it shows >> warning: division by zero [-Wdiv-by-zero]