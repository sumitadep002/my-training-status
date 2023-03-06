/*
 Write a function to remove all occurrences of given character from the string.
*/
#include <stdio.h>
#include <string.h>

void remove_char(char *str, char ch) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "hello world";
    char ch = 'l';
    remove_char(str, ch);
    printf("%s\n", str);
    return 0;
}