/*Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. */
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower((unsigned char)ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("\nTotal vowels = %d", vowels);
    printf("\nTotal consonants = %d\n", consonants);

    fclose(fp);

    return 0;
}