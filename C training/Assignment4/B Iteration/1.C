//Write a function to calculate factorial of a given number using recursion
#include<stdio.h>
int factorial(int);
int main()
{
    printf("factorial of 5 is %d",factorial(5));
    return 0;
}
int factorial(int n)
{
    if(n<=1)
    return n;
    return (n*factorial(n-1));
}