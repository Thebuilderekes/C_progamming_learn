#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
int myNumbers[4] = {25, 50, 75, 100};
char *msg = "the best C programmer"; // points to the ASCII character code of first letter "t"

// Get the memory address of the myNumbers array
printf("mem address of 25: %p\n", myNumbers);
// Get the memory address of the first array element
printf("myNumbers_address of first number %p\n", &myNumbers[0]);
printf("value of first element in the array: %i\n", *myNumbers);
printf("printing actually string using s, msg %s\n", msg); // Print the actual string
printf("pointer address of the first letter t: %p\n", msg); // points to the ASCII character code of first letter "t"
  printf("[");
for(i = 0; i < 4; i++){
    printf("%i,", myNumbers[i]);
  }
printf("]");

}
