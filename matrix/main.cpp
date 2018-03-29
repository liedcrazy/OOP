#include <QCoreApplication>
#include <matrix.h>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n; //размер матрицы
    float x; //
    Matrix m;
    cout <<"Vvedite razmer"<< endl;
    cin >>n;
    m.set_n(n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<"Vvedite ["<< i+1 <<","<< j+1 <<"] элемент";
            cin >> x;
            m.set_matrix_ij(x,i,j);
        }
        cout<< endl;
    }

    m.clear();
    return a.exec();
}

