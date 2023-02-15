/*
1. Write a program to accept marks of five subjects, calculate its total and average.
*/
#include<stdio.h>
int main()
{
    int marks[5];
    printf("enter the marks for subjects: ");
    for(int i=0;i<5;i++)
    {
        printf("marks in subject[%d]",i);
        scanf("%d",&marks[i]);
    }
    return 0;
}