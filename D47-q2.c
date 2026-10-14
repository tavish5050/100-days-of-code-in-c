/*Find the longest word in a sentence. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[200], longest[200];
    int i, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}
