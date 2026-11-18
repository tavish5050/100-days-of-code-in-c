/*Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. */
#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Operation choice;
    float num1, num2, result;

    printf("----- MENU -----\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("\nEnter your choice: ");
    scanf("%d", (int *)&choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice)
    {
        case ADD:
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}