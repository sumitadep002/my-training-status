/*
Write a function to accept array elements from the user. Write another function to print array 
elements. Re-use these functions in rest of the assignments wherever required. 
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
        print_array(ptr,n);       
    }
  
    return 0;
}