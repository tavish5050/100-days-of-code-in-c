/*Change the date format from dd/04/yyyy to dd-Apr-yyyy. */

#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (mm >= 1 && mm <= 12)
        printf("%02d-%s-%04d", dd, months[mm - 1], yyyy);
    else
        printf("Invalid date");

    return 0;
}
