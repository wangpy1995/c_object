#include <stdio.h>
#include "include/dog.h"

int main() {
    dog_t *dog = dog_init("www");
    dog->base->behavior->eat("bone");
    dog->base->behavior->walk(4);
    dog->base->behavior->talk("wang wang wang");
    dog_dead(dog);
}