/*
Write a function to search the given number into the array using binary search and return the 
index of the element. If element is not found it should return -1
*/
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Example usage of the function
int main() {
    int arr[] = {1, 3, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int index = binarySearch(arr, size, target);
    if (index == -1) {
        printf("%d not found in the array\n", target);
    } else {
        printf("%d found at index %d in the array\n", target, index);
    }
    return 0;
}
