#ifndef TEMPERATURE_H
#define TEMPERATURE_H


class temperature
{
private:
    float C, F;

public:
    temperature();
    void setC(float c);
    void setF(float f);
    float getC();
    float getF();
    void convert_CtoF();
    void convert_FtoC();
};

#endif // TEMPERATURE_H
