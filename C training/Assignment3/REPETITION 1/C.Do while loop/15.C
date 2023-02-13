/*
Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/

#include<stdio.h>
int main()
{
    int n1=0,n2=0;
    char option;

    
    {
        printf("\n'+' for addition,\n'-' for substraction\n'/' for division\n'*' for multiplication");
        printf("\nenter 'e' or 'E' to exit");
        printf("\nenter your choice:");
        scanf("%c",&option);
        switch(option)
        {
            case '+':printf("enter n1: ");
                    scanf("%d",&n1);
                    printf("enter n1: ");
                    scanf("%d",&n2);
                    printf("%d + %d = %d",n1,n2,n1+n2);
                     break;
            case '*':printf("enter n1: ");
                    scanf("%d",&n1);
                    printf("enter n1: ");
                    scanf("%d",&n2);
                    printf("%d * %d = %d",n1,n2,n1*n2);
                     break;
            case '-':printf("enter n1: ");
                    scanf("%d",&n1);
                    printf("enter n1: ");
                    scanf("%d",&n2);
                    printf("%d - %d = %d",n1,n2,n1-n2);
                     break;
            case '/':printf("enter n1: ");
                    scanf("%d",&n1);
                    printf("enter n1: ");
                    scanf("%d",&n2);
                    printf("%d / %d = %d",n1,n2,n1/n2);
                     break;
            default: printf("error occured");

        }while(option!='e' || option!='E');
        printf("\n you have successfully exited your program");

    }

    return 0;
}