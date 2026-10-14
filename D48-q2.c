/*Reverse each word in a sentence without changing the word order. */

#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, start = 0, len;

    fgets(s, sizeof(s), stdin);
    len = strlen(s);

    for (i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            int end = i - 1;

            while (start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("%s", s);
    return 0;
}
