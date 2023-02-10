/*Write a program to calculate Area and Perimeter of Triangle for given length of three sides of 
triangle. Use sqrt() function from math.h to calculate square root. 
Perimeter = a + b + c
area = squar_root_of(s*(s-a)*(s-b)*(s-c))*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,area=0,intermediate_value;
    printf("enter the length of side a ");
    scanf("%d",&a);

    printf("\nenter the length of side b ");
    scanf("%d",&b);
    
    printf("\nenter the length of side c ");
    scanf("%d",&c);

    printf("\nperimeter of the triangle %d",a+b+c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));    //sqrt function to find square root
    printf("\n area of triangle %d",area);
    return 0;
}   