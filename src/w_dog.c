//
// Created by wpy on 18-4-29.
//

#include <memory.h>
#include <stdio.h>
#include "../include/w_dog.h"

void w_dog_eat(const char *food) {
    printf("white dog eat: %s . \n", food);
}

void w_dog_walk(const int step) {
    printf("white dog walk: %d steps per time. \n", step);
}

void w_dog_talk(const char *msg) {
    printf("white dog talk: %s . \n", msg);
}

w_dog_t *w_dog_init() {
    w_dog_t *w_dog = malloc(sizeof(w_dog_t));
    dog_t *dog = dog_init("www");
    memcpy(&(w_dog->dog), dog, sizeof(dog_t));
    w_dog->dog.base.behavior->eat = w_dog_eat;
    w_dog->dog.base.behavior->walk = w_dog_walk;
    w_dog->dog.base.behavior->talk = w_dog_talk;
    free(dog);
    return w_dog;
}
