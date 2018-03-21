#ifndef SQUARE_H
#define SQUARE_H
#include<figures.h>

class square : public figures
{
private:
    unsigned x;
public:
    square();
    void setX(unsigned X);
    unsigned getX();
    float S() override;
    float P() override;
};
#endif // SQUARE_H
