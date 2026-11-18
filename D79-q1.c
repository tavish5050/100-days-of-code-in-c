/*A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. */
#include <stdio.h>

int main()
{
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("File contains no integers.\n");
    }

    fclose(fp);

    return 0;
}