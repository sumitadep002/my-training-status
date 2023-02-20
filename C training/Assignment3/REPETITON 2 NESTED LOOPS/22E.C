/*

0             G                 i=0,j=             6
1         E F G F E             i=1,j=         4 5 6 7 8 
2     C D E F G F E D C         i=2,j=     2 3 4 5 6 7 8 9 10
3 A B C D E F G F E D C B A     i=3,j= 0 1 2 3 4 5 6 7 8 9 10 11 12
4     C D E F G F E D C         i=4,j=     2 3 4 5 6 7 8 9 10
5         E F G F E             i=5,j=         4 5 6 7 8 
6             G                 i=6,j=             6
            row=7
            column=2*row -1 = 13
*/
#include <stdio.h>
int main()
{
    char k;
    for(int i=0;i<7;i++)
    {
        k=65;
        for(int j=0;j<13;j++)
        {
            if(((i<=3) && (i+j>=i && j<= 6*2+i)) || ((i>7) && (j>=7-i && j<= i+7)))
            printf(" %c ",k);
            else
            printf("   ");
            if(j<=7)
            k++;
            else
            k--;
        }
        printf("\n");
    }
    

    return 0;
}