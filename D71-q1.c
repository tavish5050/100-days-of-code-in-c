/*Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved. */

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    scanf("%99s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully");

    return 0;
}
