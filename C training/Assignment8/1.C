/*
Write a program to make your own command like "ls" which will take two arguments and print 
subtraction of them
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: mysub <num1> <num2>\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int diff = num1 - num2;
    printf("The difference between %d and %d is %d\n", num1, num2, diff);
    return 0;
}
