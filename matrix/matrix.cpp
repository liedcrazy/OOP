#include "matrix.h"

Matrix::Matrix()
{

}

void Matrix::set_n(int n1){
    if (n1 >1 & n< 5){
        n=n1;
        for (int i=0; i<n; i++){
            matrix.push_back(vector<float>(n));
        }

    }
    else n=4;
}

void Matrix::set_matrix_ij(float x,int i,int j){
    matrix[i][j]=x;
}
float Matrix::get_matrix_ij(int i,int j){
    return matrix[i][j];
}
float Matrix::get_T_ij(int i,int j){
    return T[i][j];
}
float Matrix::get_B_ij(int i,int j){
    return B[i][j];
}

void Matrix::clear(){
    for (int i=0; i<n; i++){
            matrix[i].clear();
            T[i].clear();
            B[i].clear();
        }
}
void Matrix::set_B_T(){
    for (int i=0; i<n; i++){
        T.push_back(vector<float>(n));
        B.push_back(vector<float>(n));
    }
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
        T[3][2]=(matrix[i][2]-(B[1][2]*T[i][0])-(B[1][2]*T[i][1]))/B[2][2];
    }
    B[3][3]= matrix[3][3]-(B[0][3]*T[3][0]+B[1][3]*T[3][1]+B[2][3]*T[3][2]);
}
    //B и T готовы теперь находим обратные им
void Matrix::set_invers_B_T(){
    for (int i=0; i<n; i++){
        B[i][i]=1/B[i][i];
        T[i][i]=1/T[i][i];
    }
    for (int i=1; i<n; i++){
        int j=i+1;
        B[i-1][j]=(B[i-1][j]*B[i-1][i-1])/(-B[j][j]);
        T[j][i-1]=(T[j][i-1]*T[j][j])/(-T[i-1][i-1]);
    }
    for (int i=2; i<n; i++){
        int j=0;
        B[j][i]=((B[j][i]*B[j][j])+(B[j+1][i]*B[j][j+1]))/(-B[i][i]);
        T[i][j]=((T[i][j]*T[i][i])+(T[j+1][j]*T[i][j+1]))/(-T[j][j]);
        j++;
    }
    B[0][3]=((B[0][3]*B[0][0])+(B[1][3]*B[0][1])+(B[2][3]*B[0][2]))/(-B[3][3]);
    T[3][0]=((T[1][0]*T[3][1])+(T[2][0]*T[3][2])+(T[3][0]*T[3][3]))/(-T[0][0]);
}
