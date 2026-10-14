/*Check if one string is a rotation of another. */

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];

    scanf("%99s", s1);
    scanf("%99s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
