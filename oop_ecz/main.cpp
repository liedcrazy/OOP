#include <QCoreApplication>
#include<iostream>
#include<square.h>
#include<circle.h>
#include<triangle.h>
#include<figures.h>

using namespace std;

void printPS (figures *PS){
    cout <<" S=" << PS->S()<<" P=" << PS->P()<<endl;
}


int main(int argc, char *argv[])
{
    unsigned temp;
    square squ;
    circle cir;
    triangle tri;

    QCoreApplication a(argc, argv);
    //square
    cout << "x=";
    cin >> temp;
    squ.setX(temp);
    cout << "x=" << squ.getX();
    printPS(&squ);
    //circle
    cout << "r=";
    cin >> temp;
    cir.setr(temp);
    cout << "x=" << cir.getr();
    printPS(&cir);
    //triangle
    cout << "a=";
    cin >> temp;
    tri.setA(temp);
    cout << "b=";
    cin >> temp;
    tri.setB(temp);
    cout << "c=";
    cin >> temp;
    tri.setC(temp);
    cout << "a=" << tri.getA()<<" b=" << tri.getB()<<" c=" << tri.getC();
    printPS(&tri);
    return a.exec();
}
