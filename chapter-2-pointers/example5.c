#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  char *k;
  int a = 200;
  char employee_name[] = "Go";
  p = &a;
  k = employee_name;// Using array name directly // check if it point to G


  printf("This is the value of a %d\n", a);
  printf("this is the address of a: %p\n", &a);
  printf("this is the address of a from pointer p: %p\n", p);
  printf("this is the size of a %li\n", sizeof(a));

  printf("this is the address of employee_name first character address using employee_name: %p\n", employee_name);
  printf("this is the ASCII value of employee_name first character address using employee_name[0]: %d\n", employee_name[0]);
  printf("this is the value of employee_name using employee_name: %s\n", employee_name);
}
