/*Print initials of a name with the surname displayed in full. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];
    int i, start = 0, len;

    fgets(name, sizeof(name), stdin);
    len = strlen(name);

    while (len > 0 && (name[len - 1] == '\n' || name[len - 1] == '\r')) {
        name[--len] = '\0';
    }

    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            if (i + 1 < len && name[i + 1] != ' ')
                printf("%c. ", toupper(name[i + 1]));
        }
    }

    while (len > 0 && name[len - 1] == ' ')
        len--;

    start = len - 1;
    while (start >= 0 && name[start] != ' ')
        start--;

    printf("%s", name + start + 1);

    return 0;
}
