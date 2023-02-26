#include <stdio.h>
#include <string.h>

void remove_chars(char *string1, char *string2);

int main() {
    char string1[] = "abc";
    char string2[] = "abcdefg";
    printf("Before: %s\n", string2);
    remove_chars(string1, string2);
    printf("After: %s\n", string2);
    return 0;
}