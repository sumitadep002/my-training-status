#include <stdio.h>

int RemoveDuplicate(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int temp[n];
    int j = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    for (size_t i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }
    return j;
}

int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements: \n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nBefore Removing the duplicate: \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    n = RemoveDuplicate(array, n);
    printf("\nAfter Removing the duplicate: \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}