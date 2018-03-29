#include "matrix.h"

Matrix::Matrix()
{

}

void Matrix::set_n(int n1){
    if (n1 >1){
        n=n1;
        for (int i=0; i<n; i++){
            A.push_back(vector<float>(n));
            inA.push_back(vector<float>(n));
        }

    }
}

void Matrix::set_A_ij(float x,int i,int j){
    A[i][j]=x;
}
float Matrix::get_A_ij(int i,int j){
    return A[i][j];
}
float Matrix::get_T_ij(int i,int j){
    return T[i][j];
}
float Matrix::get_B_ij(int i,int j){
    return B[i][j];
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
        B[0][i]=A[0][i]/T[0][0];
        T[i][0]=A[i][0]/B[0][0];
    }
    for (int i=1; i<n; i++){
        B[1][i]=(A[1][i]-B[0][i]*T[1][0])/T[1][1];
        T[i][1]=(A[i][1]-B[0][1]*T[i][0])/B[1][1];
    }
    for (int i=2; i<n; i++){
        B[2][i]=(A[2][i]-(B[0][i]*B[2][0])-(B[1][i]*T[2][1]))/T[2][2];
        T[3][2]=(A[i][2]-(B[1][2]*T[i][0])-(B[1][2]*T[i][1]))/B[2][2];
    }
    B[3][3]= A[3][3]-(B[0][3]*T[3][0]+B[1][3]*T[3][1]+B[2][3]*T[3][2]);
}
    //B и T готовы теперь находим обратные им
void Matrix::set_invers_B_T(){
    for (int i=0; i<n; i++){
        B[i][i]=1/B[i][i];
        T[i][i]=1/T[i][i];
    }
    for (int i=1; i<n; i++){
        //int j=i-1;
        B[i-1][i]=(B[i-1][i]*B[i-1][i-1])/(-B[i][i]);
        T[i][i-1]=(T[i][i-1]*T[i][i])/(-T[i-1][i-1]);
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

void Matrix::set_invers_A(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            inA[i][j] =0;
            for(int k = 0; k < n; k++){
                inA[i][j] += T[i][k] * B[k][j];
            }
        }
    }
}


void Matrix::clear(){
    for (int i=0; i<n; i++){
            A[i].clear();
            inA[i].clear();
            T[i].clear();
            B[i].clear();
        }
}
