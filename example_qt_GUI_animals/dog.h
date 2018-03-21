#ifndef DOG_H
#define DOG_H
#include "animals.h"

class Dog:public Animals
{
public:
    Dog();
    QString speak();
};

#endif // DOG_H
