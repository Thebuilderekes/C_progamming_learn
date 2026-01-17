#include <stdio.h>

// 1. Change arguments to pointers (int*)
void go_east(int *lon, int *lat) {
    // 2. Use the asterisk to "dereference" (reach into the box)
    *lon = *lon + 1;
    *lat = *lat + 1;
}

int main() {
    int longitude = 40;
    int latitude = 50;

    // 3. Pass the memory addresses using the '&'
    go_east(&longitude, &latitude);

    printf("New coordinates are [%i, %i]\n", longitude, latitude);

    return 0;
}
