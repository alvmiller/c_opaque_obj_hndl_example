#include <stdio.h>

#include "Counter.h"

// https://blog.mbedded.ninja/programming/design-patterns/opaque-pointers/
// https://interrupt.memfault.com/blog/opaque-pointers

// gcc main.c Counter.c

int main(void) {
    printf("Creating counter...\n");
    // From main.c, we can't access any of the members of the
    // opaque Counter_t struct, we only have a pointer and have to use
    // the provided API in Counter.h.
    Counter_t *myCounter = Counter_Init();

    Counter_AddOne(myCounter);
    uint8_t count = Counter_GetCount(myCounter);
    printf("Count: %d\n", count);

    // Finally, destroy counter
    Counter_DeInit(myCounter);
    return 0;
}