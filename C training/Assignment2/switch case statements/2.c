/*
Write a program to crate four function calculator. Four functions are +, - , *, /
*/

#include<stdio.h>
int main()
{
    float number1,number2;
    char operation;
    printf("enter number1: ");
    scanf("%f",&number1);

    printf("enter number2: ");
    scanf("%f",&number2);

    printf("\n1 + for addition\n2 - substraction\n3 * for multiplcation\n/ for division");
    scanf("%c",&operation);

    switch(operation)
    {
        case '+': printf("%f + %f = %f",number1,number2,number1+number2);break;
        case '-': printf("%f - %f = %f",number1,number2,number1+number2);break;
        case '*': printf("%f * %f = %f",number1,number2,number1*number2);break;
        case '/': printf("%f / %f = %f",number1,number2,number1/number2);break;
    }

    return 0;
}