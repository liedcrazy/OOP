#include "square.h"


square::square(){
    x=0;
}

void square::setX(unsigned X){
    if (X<1) {
        return;
    }else
    x=X;
}

unsigned square::getX(){
    return x;
}

float square::S(){
    return x*x;
}
float square::P(){
    return 4*x;
}
