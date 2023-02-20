// Write a function to calculate power using recursion
#include<stdio.h>
int power(int,int);
int main()
{
    printf("factorial of 5 is %d",factorial(5));
    return 0;
}
int power(int base,int index)
{
    if(index<=1)
    return ;
    return (base*power(base,index-1));
}