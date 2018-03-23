#include "temperature.h"


temperature::temperature()
{
    C=0;
    F=0;
}

void temperature::setC(short int c){
    C=c;
}

void temperature::setF(short int f){
    F=f;
}

float temperature::getC(){
    return C;
}

float temperature::getF(){
    return F;
}

void temperature::convert_CtoF(){
    F=(C*1.8)+32;
}

void temperature::convert_FtoC(){
    C=(F-32)/1.8;
}
