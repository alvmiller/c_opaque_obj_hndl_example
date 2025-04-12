#include <stdlib.h>

#include "Counter.h"

// Implementation of Counter_t. Hidden from other files!
struct Counter_t {
  uint8_t count;
};

Counter_t *Counter_Init() {
  // NOTE: Memory allocation here! May or not be ok for an embedded
  // project, can be done at initialation time only.
  Counter_t *newCounter = malloc(sizeof(Counter_t));
  newCounter->count = 0;
  return newCounter;
}

void Counter_AddOne(Counter_t *me) { me->count++; }

uint8_t Counter_GetCount(Counter_t *me) { return me->count; }

void Counter_DeInit(Counter_t *me) {
    free(me);
}