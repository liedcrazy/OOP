#include "matrix.h"

Matrix::Matrix()
{

}

void Matrix::set_n(int n1){
    if (n1 >= 2){
        n=n1;
        for (int i=0; i<n; i++){
            matrix.push_back(vector<float>(n));
        }

    }
}

void Matrix::set_matrix_ij(float x,int i,int j){
    matrix[i][j]=x;
}
float Matrix::get_matrix_ij(int i,int j){
    return matrix[i][j];
}
int Matrix::get_matrix_size_w(){

}
int Matrix::get_matrix_size_h(){

}
void Matrix::clear(){
    matrix.clear();
}
void Matrix::get_inverse(){
    vector <vector <float> > T,B;
    T,B=matrix;
    for (int i=0; i<n; i++){    //инициализация B и T
        for(int j=0; j<n; j++){
            T[i][j]=0;
            B[i][j]=0;
        }
    }
    for (int i=0; i<n; i++){
        T[i][i]=1;              //1 по диагонали
        B[0][i]=matrix[0][i]/T[0][0];
        T[i][0]=matrix[i][0]/B[0][0];
    }
    for (int i=1; i<n; i++){
        B[1][i]=(matrix[1][i]-B[0][i]*T[1][0])/T[1][1];
        T[i][1]=(matrix[i][1]-B[0][1]*T[i][0])/B[1][1];
    }
    for (int i=2; i<n; i++){
        B[2][i]=(matrix[2][i]-(B[0][i]*B[2][0])-(B[1][i]*T[2][1]))/T[2][2];
        T[i][2]=(matrix[i][2]-(B[1][2]*T[i][0])-(B[1][2]*T[i][1]))/B[2][2];
    }



}
