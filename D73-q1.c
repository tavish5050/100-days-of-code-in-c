/*Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines. */

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch, characters = 0, words = 0, lines = 0;
    int inWord = 0, lastChar = '\n';

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            words++;
            inWord = 1;
        }

        lastChar = ch;
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
