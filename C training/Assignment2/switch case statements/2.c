/*
Write a program to crate four function calculator. Four functions are +, - , *, /
*/

#include<stdio.h>

int main()
{
    float number1, number2;
    char operation;
do{
    printf("\nEnter number1: ");
    scanf("%f", &number1);

    printf("\nEnter number2: ");
    scanf("%f", &number2);

    printf("\n(1) + for addition\n(2) - substraction\n(3) * for multiplcation\n(4) / for division\n");
    getchar();
    printf("\nenter your choice="); // read the newline character left by the previous scanf()
    scanf("%c", &operation);
    printf("\n");

    switch(operation)
    {
        case '+': printf("%0.2f + %0.2f = %0.2f", number1, number2, number1 + number2); break;
        case '-': printf("%0.2f - %0.2f = %0.2f", number1, number2, number1 - number2); break;
        case '*': printf("%0.2f * %0.2f = %0.2f", number1, number2, number1 * number2); break;
        case '/': printf("%0.2f / %0.2f = %0.2f", number1, number2, number1 / number2); break;
        case 'e': break;
        default: printf("Invalid operator!"); break;
    }
}while (operation != 'e' || operation != 'E');


    printf("\nyou have successfully exited program");

    return 0;
}