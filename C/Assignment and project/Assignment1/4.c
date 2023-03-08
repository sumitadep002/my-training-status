/*Write a program to print following pattern. 
a. Using multiple printf statements 
b. Using single printf statement 
* 
** 
*** 
**** 
*****  */
#include<stdio.h>
int main()
{
   for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)      //using multiple printf statements
        printf(" * ");
        printf("\n");
    }

    printf(" * \n *  * \n *  *  * \n *  *  *  * \n *  *  *  *  * ");   //using single printf statements

    return 0;
}