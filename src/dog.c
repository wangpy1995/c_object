//
// Created by wpy on 18-4-29.
//

#include <stdio.h>
#include <memory.h>
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

dog_t *dog_init(const char *owner) {
    dog_t *dog = (dog_t *) malloc(sizeof(dog_t));
    animal_t *animal = animal_init("doggggggggggggg");
    memcpy(&(dog->base), animal, sizeof(animal_t));

    dog->base.behavior->eat = dog_eat;
    dog->base.behavior->walk = dog_walk;
    dog->base.behavior->talk = dog_talk;

    free(animal);
    return dog;
}

void dog_dead(dog_t *dog) {
    free(dog);
}

