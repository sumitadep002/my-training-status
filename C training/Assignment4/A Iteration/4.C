/*
Write a function to implement four function calculator. Function would take operands and 
operator as arguments and returns result.
note: division may fail if denominator is zero. Use global variable as an error flag to 
avoid this problem
*/
#include<stdio.h>
int error=0;
int calculator(int op1,int op2,char op)
{
    switch(op)
    {
        case '+':return (op1+op2);
        case '-':return (op1-op2);
        case '*':return (op1*op2);
        case '/':
                if(op2==0)
                {
                    error=1;
                    return error;
                }
                else
                return (op1/op2);
    }
}

int main()
{
    int operand1,operand2;
    char operator;
    printf("enter the number1: ");
    scanf("%d",&operand1);
    printf("enter the number2: ");
    scanf("%d",&operand2);
    printf("enter the operator: ");
    scanf("%c",&operator);

    printf("result=%d",calculator(operand1,operand2,operator));
    return 0;
}