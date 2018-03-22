#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

unsigned MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
    return 1;
}
unsigned MainWindow::on_pushButton_2_clicked()
{
    return 2;
}
unsigned MainWindow::on_pushButton_3_clicked()
{
    return 3;
}
unsigned MainWindow::on_pushButton_4_clicked()
{
    return 4;
}
unsigned MainWindow::on_pushButton_5_clicked()
{
    return 5;
}
unsigned MainWindow::on_pushButton_6_clicked()
{
    return 6;
}
unsigned MainWindow::on_pushButton_7_clicked()
{
    return 7;
}
unsigned MainWindow::on_pushButton_8_clicked()
{
    return 8;
}
unsigned MainWindow::on_pushButton_9_clicked()
{
    return 9;
}
unsigned MainWindow::on_pushButton_0_clicked()
{
    return 0;
}

void MainWindow::on_pushButton_plus_clicked()
{
int temp = ui->lineEdit->text().toInt();

}

void MainWindow::on_pushButton_result_clicked()
{

}
