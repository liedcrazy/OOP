#include <QCoreApplication>
#include <matrix.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n; //размер матрицы
    float temp; //
    Matrix m;
    float mas[4][4];//убрать
    mas[0][0]=2;//3;
    mas[0][1]=14;//-3;
    mas[0][2]=6;//-4;
    mas[0][3]=12;//4;

    mas[1][0]=2;//12;
    mas[1][1]=21;//-14;
    mas[1][2]=62;//-13;
    mas[1][3]=33;//14;

    mas[2][0]=4;//-6;
    mas[2][1]=36;//2;
    mas[2][2]=85;//10;
    mas[2][3]=129;//-15;

    mas[3][0]=5;//12;
    mas[3][1]=41;//-14;
    mas[3][2]=71;//-1;
    mas[3][3]=152;//21;

    cout <<"Vvedite razmer"<< endl;
    cin >> n;
    m.set_n(n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //cout <<"Vvedite ["<< i+1 <<","<< j+1 <<"] element: ";
            //cin >> temp;
            m.set_A_ij(mas[i][j],i,j);//temp,i,j);
        }
        cout<< endl;
    }
    cout <<"Matrix:"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (m.get_A_ij(j,i) >= 0) cout <<" ";
            printf("%.3f",m.get_A_ij(j,i));
            cout <<" ";
            if (abs(m.get_A_ij(j,i)) < 10) cout <<" ";
        }
        cout<< endl;
    }
    m.set_B_T();
    cout <<"T:"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //cout <<m.get_T_ij(j,i);
            if (m.get_T_ij(j,i) >= 0) cout <<" ";
            printf("%.3f",m.get_T_ij(j,i));
            cout <<" ";
            if (abs(m.get_T_ij(j,i)) <= 10) cout <<" ";
        }
        cout<< endl;
    }
    cout <<"B:"<<endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //cout <<m.get_B_ij(j,i)<<" ";
            if (m.get_B_ij(j,i) >= 0) cout <<" ";
            printf("%.3f",m.get_B_ij(j,i));
            cout <<" ";
            if (abs(m.get_B_ij(j,i)) <= 10) cout <<" ";
        }
        cout<< endl;
    }
//    m.set_invers_B_T();
//    cout <<"1/T (invers):"<<endl;
//    for (int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            //cout <<m.get_T_ij(j,i)<<" ";
//            if (m.get_T_ij(j,i) >= 0 and m.get_B_ij(j,i) != -0) cout <<" ";
//            printf("%.3f",m.get_T_ij(j,i));
//            cout <<" ";
//            if (abs(m.get_T_ij(j,i)) < 10) cout <<" ";
//        }
//        cout<< endl;
//    }
//    cout <<"1/B (invers):"<<endl;
//    for (int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            //cout <<m.get_B_ij(j,i)<<" ";
//            if (m.get_B_ij(j,i) >= 0 and m.get_B_ij(j,i) != -0) cout <<" ";
//            printf("%.3f",m.get_B_ij(j,i));
//            cout <<" ";
//            if (abs(m.get_B_ij(j,i)) < 10) cout <<" ";

//        }
//        cout<< endl;
//    }
//    m.set_invers_A();
//    cout <<"1/A (invers):"<<endl;
//    for (int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            //cout <<m.get_A_ij(j,i)<<" ";
//            if (m.get_A_ij(j,i) >= 0) cout <<" ";
//            printf("%.3f",m.get_A_ij(j,i));
//            cout <<" ";
//            if (abs(m.get_A_ij(j,i)) < 10) cout <<" ";
//        }
//        cout<< endl;
//    }

    m.clear();
    return a.exec();
}

