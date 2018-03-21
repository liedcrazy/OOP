#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<figures.h>

class triangle : public figures
{
private:
    unsigned a, b, c;
public:
    triangle();
    void setA(unsigned A);
    void setB(unsigned B);
    void setC(unsigned C);
    unsigned getA();
    unsigned getB();
    unsigned getC();
    float S() override;
    float P() override;
};

#endif // TRIANGLE_H
