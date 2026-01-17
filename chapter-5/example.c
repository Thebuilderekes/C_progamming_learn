 #include <stdbool.h>
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
   struct employee{
    int age;
    int salary;
    char *name;
// when using a flexible array like name[] it has to come last in the struct
   };

   struct employee john = { .name = "jude", .age = 34, .salary = 4000000 };

   printf("john's salary is %i", john.salary );
   return 0;
 }
