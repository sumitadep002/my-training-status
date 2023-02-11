/*
Write a program to display
a. Prime numbers between 1 to 100
*/
#include<stdio.h>
int main()
{
    int count=0;
    for(int i=2;i<=100;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        
        if(count==2)
        printf(" %d ",i);
    }
    return 0;
}