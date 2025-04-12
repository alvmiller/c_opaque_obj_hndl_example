#include <stdint.h>

// Opaque declaration of the counter type.
typedef struct Counter_t Counter_t;

Counter_t *Counter_Init();
void Counter_AddOne(Counter_t *me);
uint8_t Counter_GetCount(Counter_t *me);
void Counter_DeInit(Counter_t *me);