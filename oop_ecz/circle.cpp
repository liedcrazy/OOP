#include "circle.h"


circle::circle()
{
 r=0;
}

void circle::setr(unsigned r1){
    r=r1;
}

unsigned circle::getr(){
    return r;
}

float circle::S(){
    return 3.14*r*r;
}

float circle::P(){
    return 2*3.14*r;
}
