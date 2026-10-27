/*Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content. */

#include <stdio.h>

int main() {
    FILE *fp;
    char text[1000];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully");

    return 0;
}
