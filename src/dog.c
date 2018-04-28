//
// Created by wpy on 18-4-29.
//

#include <stdio.h>
#include "../include/dog.h"

void dog_eat(const char *food) {
    printf("dog eat: %s . \n", food);
}

void dog_walk(const int step) {
    printf("dog walk: %d steps per time. \n", step);
}

void dog_talk(const char *msg) {
    printf("dog talk: %s . \n", msg);
}

dog_t *dog_init(char *owner) {
    animal_t *base = animal_init("dog");
    base->behavior->eat=dog_eat;
    base->behavior->walk=dog_walk;
    base->behavior->talk=dog_talk;
    dog_t *dog = malloc(sizeof(dog_t));
    dog->owner = owner;
    dog->base = base;
    return dog;
}

void dog_dead(dog_t *dog) {
    if (dog->base != NULL) {
        animal_dead(dog->base);
    }
    if (dog->owner != NULL) {
        dog->owner = NULL;
    }
}

