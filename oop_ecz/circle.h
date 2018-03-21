#ifndef CIRCLE_H
#define CIRCLE_H
#include<figures.h>

class circle : public figures
{
private:
    unsigned r;
public:
    circle();
    void setr(unsigned r1);
    unsigned getr();
    float S() override;
    float P() override;
};

#endif // CIRCLE_H
