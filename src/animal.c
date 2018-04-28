//
// Created by wpy on 18-4-28.
//


#include <stdlib.h>
#include <memory.h>
#include "../include/animal.h"

animal_t *animal_init(const char *name) {
    animal_t *animal = malloc(sizeof(animal_t));
    animal->name = name;
    behavior_t *behavior = malloc(sizeof(behavior_t));
    animal->behavior = behavior;
    return animal;
}

void animal_eat(animal_t *animal, char *food) {
    animal->behavior->eat(food);
}

void animal_walk(animal_t *animal, char *step) {
    animal->behavior->walk(step);
}

void animal_talk(animal_t *animal, char *msg) {
    animal->behavior->talk(msg);
}

void animal_dead(animal_t *animal) {
    if (animal->name != NULL) {
        animal->name = NULL;
    }
    if (animal->behavior != NULL) {
        free(animal->behavior);
        animal->behavior = NULL;
    }
}