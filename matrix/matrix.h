#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
private:
    int n; //размер квадратичной матрицы
    vector <vector <float> > matrix;
    vector <vector <float> > inverse;
    vector <vector <float> > T;
public:
    Matrix();
    void set_n(int n);
    void set_matrix_ij(float x,int i,int j);
    float get_matrix_ij(int i,int j);
    int get_matrix_size_w(); //bad
    int get_matrix_size_h();    //bad
    void get_inverse();

    void clear();
};

#endif // MATRIX_H
