#include <QCoreApplication>
#include <matrix.h>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n; //размер матрицы
    float temp; //
    Matrix m;
    cout <<"Vvedite razmer"<< endl;
    cin >> n;
    m.set_n(n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<"Vvedite ["<< i+1 <<","<< j+1 <<"] element: ";
            cin >> temp;
            m.set_A_ij(temp,i,j);
        }
        cout<< endl;
    }
    cout <<"Matrix:"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<m.get_A_ij(i,j)<<" ";
        }
        cout<< endl;
    }
    m.set_B_T();
    cout <<"T:"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<m.get_T_ij(i,j)<<" ";
        }
        cout<< endl;
    }
    cout <<"B:"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<m.get_B_ij(i,j)<<" ";
        }
        cout<< endl;
    }
    m.set_invers_B_T();
    cout <<"1/T (invers):"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<m.get_T_ij(i,j)<<" ";
        }
        cout<< endl;
    }
    cout <<"1/B (invers):"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<m.get_B_ij(i,j)<<" ";
        }
        cout<< endl;
    }
    m.set_invers_A();
    cout <<"1/matrix (invers):"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<m.get_A_ij(i,j)<<" ";
        }
        cout<< endl;
    }

    m.clear();
    return a.exec();
}

