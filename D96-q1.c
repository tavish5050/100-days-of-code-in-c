/*Create Employee structure with nested Date structure for joining date and print details. */
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%49s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joiningDate.day,
          &e.joiningDate.month,
          &e.joiningDate.year);

    printf("\n----- EMPLOYEE DETAILS -----\n");

    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Employee Salary: %.2f\n", e.salary);

    printf("Joining Date: %02d-%02d-%04d\n",
           e.joiningDate.day,
           e.joiningDate.month,
           e.joiningDate.year);

    return 0;
}