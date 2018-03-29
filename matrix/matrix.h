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
    vector <vector <float> > T,B;
public:
    Matrix();
    void set_n(int n);
    void set_matrix_ij(float x,int i,int j);
    float get_matrix_ij(int i,int j);
    void set_B_T();
    void set_invers_B_T();
    float get_T_ij(int i,int j);
    float get_B_ij(int i,int j);

    void clear();
};

#endif // MATRIX_H
