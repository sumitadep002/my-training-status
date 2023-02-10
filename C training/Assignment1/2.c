/*Write a program to accept a number and print the number in character, decimal, octal and hex 
formats*/
#include<stdio.h>
int main()
{
    int number=0;
    
    printf("enter a number in number system : "); //ask for input from user 
    scanf("%d",&number);                          //take input

    printf("%c",number);                          //print character using %c

    printf("\nhexadecimal of %d %x",number,number); //print hex value using %x

    printf("\noctal of %d %o",number,number);      //print octal using %o
    
    printf("\ndecimal of %d %d",number,number);    //print decimal number
    

    return 0;
}