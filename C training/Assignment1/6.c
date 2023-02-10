/*. PS: Write a program to accept an integer value and print its table. */
#include<stdio.h.>
int main()
{
    int number=0; //variable declaration

    printf("enter the number :"); //ask for input

    scanf("%d",&number);  //take input

    for(int i=1;i<=10;i++)  //loop for 10 cycles
    printf("\n%d x %d = %d",number,i,number*i);   //to print table

    return 0;
}