/*Print the initials of a name. */

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    int i;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 && name[i] != ' ' && name[i] != '\n')
            printf("%c", toupper(name[i]));
        else if (name[i] == ' ' && name[i + 1] != ' ' &&
                 name[i + 1] != '\n' && name[i + 1] != '\0')
            printf("%c", toupper(name[i + 1]));
    }

    return 0;
}
