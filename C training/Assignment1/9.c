#include<stdio.h>
int main()
{
    float C=0,F=0;
    printf("Enter temperature in celcius :");
    scanf("%f",&C);     
    F=(C*9/5) + 32;         //conversion from farhenheit to celcius
    printf("temperature in Fahrenheit :%f",F);


    printf("\nEnter temperature in Fahrenheit :");
    scanf("%f",&F);
    C=5*(F - 32)/9;           //conversion from celsius farhenheit
    printf("temperature in Fahrenheit :%f",C);
    return 0;
}