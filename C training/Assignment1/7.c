/* PS: Write a program to accept a 4 digit number and 
a. Display face value of each decimal digit 
b. Display place value of each decimal digit 
c. Display no in reverse order by changing decimal place values 

If user enters a 4 digit number 9361 output should be 
a. 9 3 6 1 
b. 9361 = 9 000 + 300 + 60 + 9 
c. 1639 */


#include<stdio.h>
int main()
{
    int number,num=0,temp=0;

    printf("enter the number: ");
    scanf("%d",&number);


    int remainder=number;
    int a,b=0;
    for(int i=1000;i>=1;i/=10)
    {
        printf("%d\t",remainder/i);
        remainder = remainder%i;
    }

    printf("\n");

    remainder =number;
    int intermediate_value=0;
    for(int i=1000;i>=1;i/=10)
    {
        intermediate_value=remainder/i;
        printf("%d\t+",intermediate_value*i);
        remainder = remainder%i;
    }


    temp=number;
    while(temp!=0)
    {
    num=temp%10+num*10;
    temp=temp/10;
    }
    
    printf("\n%d",num);
    printf("\n");

    return 0;
}