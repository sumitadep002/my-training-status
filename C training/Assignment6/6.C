#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, int base, char *s) {
    int i = 0, sign = n;
    if (sign < 0) {
        n = -n;
    }
    do {
        s[i++] = n % base + '0';
    } while ((n /= base) > 0);

    if (sign < 0) {
        s[i++] = '-';
    }

    s[i] = '\0';

    reverse(s);
}

int main() {
    int n = 1234;
    int base = 10;
    char s[20];
    itoa(n, base, s);
    printf("n = %d, s = %s\n", n, s);
    return 0;
}