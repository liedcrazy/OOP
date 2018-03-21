#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "animals.h"

using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ButtonClear1_clicked();

    void on_ButtonDog_clicked();

    void on_ButtonBird_clicked();

    void on_ButtonDialogs_clicked();

    void on_ButtonClear2_clicked();

private:
    Ui::MainWindow *ui;
    vector <Animals *> animals;

};

#endif // MAINWINDOW_H
