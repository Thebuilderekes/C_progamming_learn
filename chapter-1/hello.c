#include <stdio.h>   // For input/output (printf, scanf)
#include <stdlib.h>  // For memory management (malloc, free)

int main() {
    // 1. Create a pointer. Think of this as a 'remote control' for a piece of RAM.
    int *lucky_number;

    // 2. Ask Linux for exactly enough RAM to hold one integer.
    // This is 'Manual Memory Management'.
    lucky_number = (int*) malloc(sizeof(int));

    // Check if Linux successfully gave us the memory
    if (lucky_number == NULL) {
        printf("Error: Computer is out of memory!\n");
        return 1;
    }

    // 3. Use the pointer to put a value into that RAM location.
    printf("Enter your favorite number: ");
    scanf("%d", lucky_number);

    // 4. Print the value AND the physical address in your 4GB RAM.
    printf("\n--- Memory Report ---\n");
    printf("Value stored: %d\n", *lucky_number);
    printf("Physical RAM Address: %p\n", (void*)lucky_number);

    // 5. CRITICAL: Give the memory back to Linux.
    // If you don't do this, it's called a 'Memory Leak'.
    free(lucky_number);
    printf("\nMemory freed. System clean.\n");

    return 0;
}
