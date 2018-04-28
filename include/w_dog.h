//
// Created by wpy on 18-4-29.
//

#ifndef C_OBJECT_CAT_H
#define C_OBJECT_CAT_H

#include "animal.h"
#include "dog.h"

typedef struct white_dog_s_ w_dog_t;

struct white_dog_s_ {
    dog_t dog;
};

extern w_dog_t *w_dog_init();
extern void w_dog_dead(w_dog_t* w_dog);

#endif //C_OBJECT_CAT_H
