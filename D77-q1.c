/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt. */
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL)
    {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL)
    {
        printf("Error: Cannot create output.txt\n");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper((unsigned char)ch);
        fputc(ch, fp2);
    }

    printf("File converted successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}