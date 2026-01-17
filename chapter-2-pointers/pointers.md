## Pointer in C
Pointers are variables that point to the memory address of another variable.
The * and & operators are opposites. The & operator takes a piece of data and tells you where it’s stored. The * operator takes an address and tells you what’s stored there. Because pointers are sometimes called references, the * operator is said to
`dereference` a pointer.


## Dos and don't of pointers
- Dont try to access the value of a pointer that has not be initialized,so
``````
int *p;
print("value: ", *p); // WRONG!! DON'T DO IT!!

``````

 - Do not assign a value to a pointer
```
int *p;
*p = 3; WRONG!! DONT DO THIS
```

- You can assign a pointer to another pointer to make that pointer point to the
  same address as the first but probably should not.
  ```
  int *p, *q;
  p = &i;
  q = p;

  Now q points to the same address as p, which is the address of i
  ```


- [awaiting conformation] - Dont use ``&`` on strings in C because a string is already an address


## Size of Pointers
The size of a pointer in C depends on the architecture (bit system) of the machine, not the data type it points to.

    On a 32-bit system, all pointers typically occupy 4 bytes.
    On a 64-bit system, all pointers typically occupy 8 bytes.

```c

#include <stdio.h>

int main() {
    int *ptr1;
    char *ptr2;

    // Finding size using sizeof()
    printf("%zu\n", sizeof(ptr1));
    printf("%zu", sizeof(ptr2));

    return 0;
}
```

The reason for the same size is that the pointers store the memory addresses, no
matter what type they are. As the space required to store the addresses of the
different memory locations is the same, the memory required by one pointer type
will be equal to the memory required by other pointer types. ytou can see it
using the `sizeof()`


## Pointers and arrays
In C, the `&` operator is needed to reach the address of individual variables
but in arrays it is optional because array names are pointers themselves.



### References
[Pointers - geeksforgeeks](https://www.geeksforgeeks.org/c/c-pointers/)
