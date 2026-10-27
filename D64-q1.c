/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output. */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, start, maxLen = 0, len;

    fgets(s, sizeof(s), stdin);
    len = strlen(s);

    if (len > 0 && s[len - 1] == '\n') {
        s[--len] = '\0';
    }

    for (i = 0; i < len; i++) {
        int visited[256] = {0};

        for (j = i; j < len; j++) {
            if (visited[(unsigned char)s[j]]) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            start = j - i + 1;

            if (start > maxLen) {
                maxLen = start;
            }
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
