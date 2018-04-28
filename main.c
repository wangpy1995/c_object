#include <stdio.h>
#include "include/w_dog.h"

int main() {
    dog_t *dog = dog_init("www");
    animal_eat((animal_t *) dog, "bone");
    animal_walk((animal_t *) dog, 4);
    animal_talk((animal_t *) dog, "wang wang wang");
    animal_dead((animal_t *) dog);

    w_dog_t *w_dog = w_dog_init();
    animal_eat((animal_t *) w_dog, "bone");
    animal_walk((animal_t *) w_dog, 4);
    animal_talk((animal_t *) w_dog, "wang wang wang");
    animal_dead((animal_t *) w_dog);
}