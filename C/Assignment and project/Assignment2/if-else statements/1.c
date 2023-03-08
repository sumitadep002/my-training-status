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

    if(second_number == 0)
    printf("ERROR: you have entered 0 as diviser which not not valid");
    else
    printf("\nfirst_number/second number %f",first_number/second_number);


    return 0;
}


// whenever i try to divide a number by 0 it shows >> warning: division by zero [-Wdiv-by-zero]