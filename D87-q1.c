/*Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */
#include <stdio.h>

enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;
    int choice;

    printf("----- USER ROLES -----\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("\nEnter your role: ");
    scanf("%d", &choice);

    role = choice;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;

        default:
            printf("Invalid user role!\n");
    }

    return 0;
}