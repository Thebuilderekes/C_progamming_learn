#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
struct robot {
    int alive;
    char name[5];
    int xpos = 50;
    int ypos;
    int strength;
  };

  printf("%s\n", name);

  printf("The evil robot struct size is %lu\n with xpos of %i\n", sizeof(struct robot), xpos);

}
