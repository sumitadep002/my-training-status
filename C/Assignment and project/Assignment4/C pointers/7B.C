/*
Write a function to calculate sum and product into a single function. 
b. Without using global variables
*/
#include<stdio.h>

void sum_product(int,int,int*,int*);
int main()
{
    int sum=0,product=0;
    
    sum_product(5,10,&sum,&product);
    printf("sum of 5 and 10 is %d",sum);
    printf("\nproduct of 5 and 10 is %d",product);
    return 0;
}
void sum_product(int a,int b,int *sum,int *product)
{
    *sum=a+b;
    *product=a*b;
}