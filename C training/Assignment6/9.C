#include <stdio.h>
#include <string.h>

void find_and_replace(char *source, const char *find, const char *replace) {
    char *pos = strstr(source, find);
    if (pos == NULL) {
        return; // If the search string is not found, return without doing anything.
    }

    size_t find_len = strlen(find);
    size_t replace_len = strlen(replace);

    if (replace_len < find_len) {
        // Shift the string to the left if the replacement is shorter than the search string.
        size_t remaining_len = strlen(pos + find_len) + 1;
        strncpy(pos, replace, replace_len);
        memmove(pos + replace_len, pos + find_len, remaining_len);
    } else if (replace_len > find_len) {
        // Shift the string to the right if the replacement is longer than the search string.
        size_t remaining_len = strlen(pos + find_len);
        size_t shift_len = replace_len - find_len;
        memmove(pos + find_len + shift_len, pos + find_len, remaining_len + 1);
        strncpy(pos, replace, replace_len);
    } else {
        strncpy(pos, replace, replace_len);
    }

    // Recurse to find and replace the next occurrence of the search string.
    find_and_replace(pos + replace_len, find, replace);
}

int main() {
    char source[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    printf("Before: %s\n", source);
    find_and_replace(source, find, replace);
    printf("After: %s\n", source);

    return 0;
}