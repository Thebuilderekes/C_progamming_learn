#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;
  int result;
   while (1) {
        printf("Enter your age (numbers only): ");
        result = scanf("%i", &age);

        if (result == 1) {
            // Success! We got a number.
            break;
        } else {
            // Failure! The user typed a letter or symbol.
            printf("Invalid input. Please try again.\n");

            // PRO-TIP: We must clear the "bad" data out of the buffer
            // otherwise scanf will keep reading the same error forever!
            while (getchar() != '\n');
        }
  }
        if (age > 2) {
            printf("This is good: %i\n", age);
        } else {
            printf("Not good: %i\n", age);
        }

    return 0;
}
