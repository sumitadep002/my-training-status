/*
Write a program to display number of days in the given year. Check condition for leap year. A 
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap 
years. 
b.Using logical operators
*/
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d",&year);

    if(year%4==0 && year%100==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            printf("%d is a leap year (it has 366 days)",year);
            else
            printf("%d is not a leap year (it has 365 days)",year);
        }
        else
        printf("%d is a leap year (it has 366 days)",year);
    }
    else
    printf("%d is not a leap year (it has 365 days)",year);


    return 0;
}