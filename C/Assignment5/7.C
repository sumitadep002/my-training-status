/*
 Write a function to sort the array using selection or bubble sort. 
*/
#include <stdio.h>
#include <stdlib.h>
void accept_array(int *a,int n)
{
    for (int i = 0; i < n; i++) 
        {
            printf("\nelement[%d]=",i);
            scanf("%d",&a[i]);
        }

}
void print_array(int *a,int n)
{
    printf("The elements of the array are: ");
        for (int i = 0; i < n; i++) 
        {
            printf("%d, ", a[i]);
        }
}
void sort_array(int *a,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
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
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
  
        accept_array(ptr,n);
        sort_array(ptr,n);
        print_array(ptr,n);

    }
  
    return 0;
}