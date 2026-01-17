#include <stdio.h>
int main()
{
  int x = 4;
  //&x is the address
  int *address_of_x = &x; // This is the pointer variable that points to the address

  //int* address_of_x = &x; // This is dereferencing the pointer to get the value by
  //using printf("The address of x is: %i\n", *address_of_x);

  // Remember that * is used on a variable when you want to read a memory address.
  int value_of_x = *address_of_x; // This is the value of the pointer variable
  printf("This is the value of x: %i\n", value_of_x );
  // you can further read the address of value_of_x by pointing a new variable to  &value_of_x and printing it out
// Pro-tip: You can also print the address itself using %p
    printf("The address of x is: %p\n", address_of_x);
}

// The * and & operators are opposites. The & operator takes a piece of data and tells you where it’s stored. The * operator takes an address and tells you what’s stored there. Because pointers are sometimes called references, the * operator is said to dereference a pointer.
