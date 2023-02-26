#include <stdio.h>
#include <string.h>
#include <ctype.h>

// strlen() function
size_t my_strlen(const char *str) {
    size_t len = 0;
    while (*str++ != '\0') {
        len++;
    }
    return len;
}

// strcpy() function
char *my_strcpy(char *dest, const char *src) {
    char *dest_copy = dest;
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
    return dest_copy;
}

// strcat() function
char *my_strcat(char *dest, const char *src) {
    char *dest_copy = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
    return dest_copy;
}

// strcmp() function
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

// stricmp() function
int my_stricmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && tolower(*str1) == tolower(*str2)) {
        str1++;
        str2++;
    }
    return tolower(*str1) - tolower(*str2);
}

// strrev() function
char *my_strrev(char *str) {
    char *start = str;
    char *end = start + my_strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
    return str;
}

// strchr() function
char *my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

// strstr() function
char *my_strstr(const char *str, const char *substr) {
    while (*str != '\0') {
        const char *str_copy = str;
        const char *substr_copy = substr;
        while (*str_copy == *substr_copy && *substr_copy != '\0') {
            str_copy++;
            substr_copy++;
        }
        if (*substr_copy == '\0') {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str1[] = "hello";
    char str2[] = "world!";
    char str3[50];
    char str4[] = "world";
    char str5[] = "HELLO";
    char str6[] = "reverse";
    char str7[] = "This is a sample string";
    char str8[] = "quick brown fox jumps";

    // strlen() function
    printf("Length of str1: %lu\n", my_strlen(str1));

    // strcpy() function
    my_strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // strcat() function
    my_strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    // strcmp() function
    int cmp1 = my_strcmp(str1, str4);
    int cmp2;
    return 0;
}