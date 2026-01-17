#include <stdio.h>
#include "employee.h" // Notice the double quotes for local files

void print_employee(Employee *e) {
    printf("Name: %s | Age: %d | Salary: $%d\n", e->name, e->age, e->salary);
}

void raise_salary(Employee *e, int amount) {
    e->salary += amount;
}
