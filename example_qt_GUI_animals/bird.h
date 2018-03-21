#ifndef BIRD_H
#define BIRD_H
#include "animals.h"

class Bird:public Animals
{
public:
    Bird();
    QString speak();
};

#endif // BIRD_H
