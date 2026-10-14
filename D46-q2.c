/*Find the first repeating lowercase alphabet in a string */
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%99s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
            freq[str[i] - 'a']++;
        }
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}