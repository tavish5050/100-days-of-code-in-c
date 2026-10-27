/*Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    int i;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0) {
            s[i] = toupper((unsigned char)s[i]);
        } else {
            s[i] = tolower((unsigned char)s[i]);
        }
    }

    printf("%s", s);

    return 0;
}
