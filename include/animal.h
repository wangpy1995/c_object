//
// Created by wpy on 18-4-28.
//

#ifndef C_OBJECT_ANIMAL_H
#define C_OBJECT_ANIMAL_H

typedef struct animal_s_ animal_t;
typedef struct animal_behavior_s_ behavior_t;


struct animal_s_ {
    const char *name;
    behavior_t *behavior;
};

struct animal_behavior_s_ {
    void (*eat)(const char *food);

    void (*walk)(const int step);

    void (*talk)(const char *msg);
};

extern animal_t *animal_init(const char *name);

extern void animal_eat(animal_t *animal, char *food);

extern void animal_walk(animal_t *animal, int step);

extern void animal_talk(animal_t *animal, char *msg);

extern void animal_dead(animal_t *animal);

#endif //C_OBJECT_ANIMAL_H