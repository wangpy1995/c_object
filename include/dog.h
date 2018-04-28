//
// Created by wpy on 18-4-28.
//

#include <stdlib.h>
#include "animal.h"

typedef struct dog_s_ dog_t;

struct dog_s_ {
    animal_t *base;
    const char *owner;
};

extern dog_t *dog_init(char *owner);

extern void dog_dead(dog_t*dog);
