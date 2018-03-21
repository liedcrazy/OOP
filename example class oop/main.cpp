//Пример по ооп

#include <QCoreApplication>
#include <iostream>

using namespace std;

class vector3D{
  float x, y ,z;
public:
  vector3D(){
      x=0;
      y=0;
      z=0;
  }

  void setX(float X){
  //Вход:X
  //Предусловие:
  //процесс:
      x=X;
  //Выход:
  //Постусловие:
  }
  void setY(float Y){
    y=Y;
  }
  void setZ(float Z){
    z=Z;
  }
  float getX(){
    return x;
  }
  float getY(){
    return y;
  }
  float getZ(){
    return z;
  }
  float abs(){

     return sqrt(x*x+y*y+z*z);
  }
  void summ2(vector3D V1,vector3D V2){
     x=V1.x+ V2.x;
     y=V1.y+V2.y;
     z=V1.z+V2.z;
  }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector3D v1,v2, vsumm;
    float cor=0 ;
    cout << "v1 x=";
    cin >> cor;
    v1.setX(cor);
    cout << "v1 y=";
    cin >> cor;
    v1.setY(cor);
    cout << "v1 z=";
    cin >> cor;
    v1.setZ(cor);
    cout << "v1 x="<<v1.getX()<< " y="<<v1.getY()<< " z="<<v1.getZ()<<endl;
    cout << "abs="<<v1.abs()<<endl;
    cout << "v2 x=";
    cin >> cor;
    v2.setX(cor);
    cout << "v2 y=";
    cin >> cor;
    v2.setY(cor);
    cout << "v2 z=";
    cin >> cor;
    v2.setZ(cor);
    vsumm.summ2(v1,v2);
    cout << "summ vector v1 and v2:" << " x=" <<vsumm.getX()<< " y=" <<vsumm.getY()<< " z=" <<vsumm.getZ()<< endl;
    return a.exec();
}
