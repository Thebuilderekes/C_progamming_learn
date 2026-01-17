#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Using typedef makes the struct much cleaner to use elsewhere
typedef struct {
    char name[50];
    int age;
    int salary;
} Employee;

// Function prototypes (declarations)
void print_employee(Employee *e);
void raise_salary(Employee *e, int amount);

#endif
