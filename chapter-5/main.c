#include "employee.h"

int main() {
    Employee john = {"John Doe", 34, 4000000};

    raise_salary(&john, 500000);
    print_employee(&john);

    return 0;
}
