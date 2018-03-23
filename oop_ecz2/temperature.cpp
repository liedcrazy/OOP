#include "temperature.h"
#include "QDebug"

temperature::temperature()
{
    C=0;
    F=0;
}

void temperature::setC(float c){
    if (C=c)
        qDebug() << "C good";
    else qDebug() << "C bad";


}

void temperature::setF(float f){
    if(F=f)
        qDebug() << "F good";
    else qDebug() << "F bad";
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
