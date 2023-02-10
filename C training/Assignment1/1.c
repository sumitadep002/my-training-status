//PS:Write  a program to Accept two numbers and 
//(a).find its sum. 
//(b).find its difference. 
//(c).find its product.

#include<stdio.h>
int main()
{
    int a,b;                         //declare variable as integers
    printf("enter the number a :");  //asking user to enter number
    scanf("%d",&a);                  //Take input
    printf("\nenter the number a :");
    scanf("%d",&b)                   //Take input;                     
    printf("\nsummation of your number: %d",a+b);  //output of addition
    printf("\ndifference of your number: %d",a-b); //output of substraction
    printf("\nmultiplication of your number: %d",a*b);//output of multiplication
    return 0;
}