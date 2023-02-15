/*
Write a function to calculate maximum of the array elements. Write another f.
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
int main()
{
    int* ptr;
    int n;
  
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
  
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
  
    // Check if the memory has been successfully
    // allocated by malloc or not
   if (ptr == NULL)
    printf("Memory not allocated.\n");
    else
    {
    printf("\nmemory has been allocated successfully");
    accept_array(ptr, n);
    printf("\nmaximum value in given array is = %d", max_array(ptr, n));
    }
    
    return 0;
}