#include <stdio.h>
int main()
{
  int contestants[] = {1, 2, 3};
  int *choice = contestants; // *choice = contestants[0]
  contestants[0] = 2; //contestants[0] = 2, so also *choice is now 2
  contestants[1] = contestants[2];
  contestants[2] = *choice;
  //{2, 3, 2}
  printf("I'm going to pick contestant number %i\n", contestants[2]);
// Viewing the array
    printf("The new array is: [ ");
    for (int i = 0; i < 3; i++) {
        printf("%i,", contestants[i]);
    }
    printf("]\n");
}
