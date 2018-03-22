#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    unsigned on_pushButton_1_clicked();
    unsigned on_pushButton_2_clicked();
    unsigned on_pushButton_3_clicked();
    unsigned on_pushButton_4_clicked();
    unsigned on_pushButton_5_clicked();
    unsigned on_pushButton_6_clicked();
    unsigned on_pushButton_7_clicked();
    unsigned on_pushButton_8_clicked();
    unsigned on_pushButton_9_clicked();
    unsigned on_pushButton_0_clicked();
    void on_pushButton_plus_clicked();
    void on_pushButton_result_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
