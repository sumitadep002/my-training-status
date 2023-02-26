#include <stdio.h>

void findAndReplace(char *str, char *find, char *replace) {
    int i, j, k, n, m;
    n = strlen(str);
    m = strlen(find);

    for (i = 0; i < n; i++) {
        k = i;
        j = 0;

        while (str[k] == find[j] && j < m) {
            k++;
            j++;
        }

        if (j == m) {
            for (j = 0; j < m; j++) {
                str[i + j] = replace[j];
            }
            i = i + m - 1;
        }
    }
}

int main() {
    char str[100] = "This is test time";
    char find[10] = "is";
    char replace[10] = "was";

    printf("Before replace: %s\n", str);

    findAndReplace(str, find, replace);

    printf("After replace: %s\n", str);

    return 0;
}