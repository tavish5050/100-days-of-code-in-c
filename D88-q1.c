/*Print all enum names and integer values using a loop. */
#include <stdio.h>

enum Days
{
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    int i;

    printf("Enum Names and Integer Values:\n\n");

    for (i = 0; i < 7; i++)
    {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}