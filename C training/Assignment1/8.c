/* Write a program to accept three integer numbers and find its average.*/

#include<stdio.h>
int main()
{
    int a,b,c;  //declaration
    printf("enter first number : "); //ask for input for first number
    scanf("%d",&a);

    printf("\nenter second number : "); //ask for input for second number
    scanf("%d",&b);

    printf("\nenter third number : "); //ask for input for third number
    scanf("%d",&c);

    printf("\nthe average three number is %d",(a+b+c)/3); //print average
    return 0;
}