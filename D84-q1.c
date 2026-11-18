/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */
#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status result;

    result = SUCCESS;

    switch (result)
    {
        case SUCCESS:
            printf("Operation completed successfully.");
            break;

        case FAILURE:
            printf("Operation failed.");
            break;

        case TIMEOUT:
            printf("Operation timed out.");
            break;

        default:
            printf("Invalid status.");
    }

    return 0;
}