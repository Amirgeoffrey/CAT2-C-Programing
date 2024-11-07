//PROGRAM TO DISPLAY EMPLOYEE DETAILS

//Author:Amir Geoffrey Jeremiah
//Reg No:CT101/G/23179/24
//Date:11/7/24

include <stdio.h>
typedef struct {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
} Employee;

int main() {
    Employee employee = {"John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};
    printf("Name: %s\n", employee.name);
    printf("ID: %d\n", employee.id);
    printf("Department: %s\n", employee.department);
    printf("Salary: %.2f\n", employee.salary);
    printf("Email: %s\n", employee.email);

    return 0;
}