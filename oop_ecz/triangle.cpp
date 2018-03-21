#include "triangle.h"
#include <math.h>

triangle::triangle()
{
 a=0;
 b=0;
 c=0;
}

void triangle::setA(unsigned A){
    a=A;
}
void triangle::setB(unsigned B){
    b=B;
}
void triangle::setC(unsigned C){
    c=C;
}
unsigned triangle::getA(){
    return a;
}
unsigned triangle::getB(){
    return b;
}
unsigned triangle::getC(){
    return c;
}
float triangle::S(){
    return sqrt( (P()/2)*((P()/2)-a)*((P()/2)-b)*((P()/2)-c) );
}

float triangle::P(){
    return a+b+c;
}
