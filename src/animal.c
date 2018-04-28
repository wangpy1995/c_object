//
// Created by wpy on 18-4-28.
//


#include <stdlib.h>
#include <memory.h>
#include <assert.h>
#include "../include/animal.h"

animal_t *animal_init(const char *name) {
    assert(name != NULL);
    size_t name_len = strlen(name);

    animal_t *animal = (animal_t *) malloc(sizeof(animal_t)
                                           + sizeof(behavior_t) + name_len + 1);
    memset(animal, 0, (sizeof(animal_t) + sizeof(behavior_t)
                       + name_len + 1));
    animal->name = (char *) animal + sizeof(animal_t);
    memcpy(animal, name, name_len);
    animal->behavior = (behavior_t *) ((char *) animal
                                       + sizeof(animal_t) + name_len + 1);

    return animal;
}

void animal_eat(animal_t *animal, char *food) {
    animal->behavior->eat(food);
}

void animal_walk(animal_t *animal, int step) {
    animal->behavior->walk(step);
}

void animal_talk(animal_t *animal, char *msg) {
    animal->behavior->talk(msg);
}

void animal_dead(animal_t *animal) {
    assert(animal != NULL);
    free(animal);
}