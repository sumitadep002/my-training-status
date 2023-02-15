/*
Write a function to calculate maximum and minimum of the array elements. 
*/
#include<stdio.h>
#include<stdlib.h>
void accept_array(int *a, int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("\nelement[%d]=", i);
        scanf("%d", &a[i]);
    }
}
int max_array(int *a,int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }

    return max;
}
int min_array(int *a, int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
int main()
{
    int* ptr;
    int n;
  
    printf("Enter number of elements:");
    scanf("%d",&n);
  
    ptr = (int*)malloc(n * sizeof(int));

   if (ptr == NULL)
    printf("Memory not allocated.\n");
    else
    {
    printf("\nmemory has been allocated successfully");
    accept_array(ptr, n);
    printf("\nmaximum value= %d and minimum value= %d", max_array(ptr, n), min_array(ptr, n));
    }
    
    return 0;
}