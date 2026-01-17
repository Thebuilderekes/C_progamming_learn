#include <stdio.h>
#include <stdlib.h>

void get_msg(char *msg){

printf("this is the message %s", msg );
}

int main()
{
  int i, j, *q, *p = &i;
  i = 34;
  *q = *p;
// without giving q an address of &j, you can do this:
// int *q = malloc(sizeof(int));
  //free(q)
// Ask the OS for a safe spot in the Heap
// and then it will still point to the value of p based on q = p


  //as long as *p points to &i *p = value of i
  //// changing the value of *p will change the value of i
  char *msg = "Ekeopre the C programmer";
  get_msg(msg);
  printf("this is the value of pointer p for variable i %d\n", *p);
  printf("this is the value of pointer q for variable j %d\n", *q);
  return 0;
}
