//allocate memory to 2D array using double pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int row,column;
    printf("enter the number of rows ");
    scanf("%d",&row);
    printf("enter the number of column ");
    scanf("%d",&column);
    int **p;
    p=(int**)malloc(sizeof(int)*row);
    for(int i=0;i<row;i++)
    p[i]=(int*)malloc(column * sizeof(int));

    for(int i=0;i<row;i++)
    {
    for(int j=0;j<column;j++)
    {
        printf("p[%d][%d] ",i,j);
        scanf("%d",&p[i][j]);
    }
    }
    printf("\n");

    for(int i=0;i<row;i++)
    {
    for(int j=0;j<column;j++)
        printf("p[%d][%d] %d",i,j,p[i][j]);
    }

    return 0;
}