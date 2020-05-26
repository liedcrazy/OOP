#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <iostream>
#include <vector>



int R = 0;
bool Plus = 0;
bool Minus = 0;

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

int result(string res)
{
    //vector <string> Arr(res.length());
    //for (size_t id = 0; id < res.length(); id++) Arr[id] = res[id]; //заполнили вектор символами из строки
    int Num = 0;
    float sizeN = 0;
    for (size_t id = 0; id < res.length(); id++)
    {
        if (res[id] = "0" or "1" or "2" or "3" or "4" or "5" or "6" or "7" or "8" or "9") sizeN++;

        else
        {
            if (sizeN > 0)
            {
                string substr = res.substr(id - sizeN, id);
                Num = atoi(substr.c_str());
            }
        }

    }


    return 0;
}

unsigned MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
    return 1;
}
unsigned MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
    return 2;
}
unsigned MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
    return 3;
}
unsigned MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
    return 4;
}
unsigned MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
    return 5;
}
unsigned MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
    return 6;
}
unsigned MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
    return 7;
}
unsigned MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
    return 8;
}
unsigned MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
    return 9;
}
unsigned MainWindow::on_pushButton_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
    return 0;
}

void MainWindow::on_pushButton_plus_clicked()
{
    int temp = ui->lineEdit->text().toInt();
    ui->lineEdit->clear();
    R = temp + R;
    Plus = true;
    Minus = false;
}

void MainWindow::on_pushButton_minus_clicked()
{
    int temp = ui->lineEdit->text().toInt();
    ui->lineEdit->clear();
    if (R = 0) R = R - temp;
    else R = temp;
    Minus = true;
    Plus = false;
}

void MainWindow::on_pushButton_result_clicked()
{
    //написать функцию которой передовать строку.ф-я будет разбивать строку посимвольно скать определенные символы и обрабатывать.
    int temp = ui->lineEdit->text().toInt();
    if (Plus) R = temp + R;
    if (Minus) R = R - temp;
    ui->lineEdit->setText(QString::number(R));
    R=0;
    Plus = false;
    Minus = false;
}

void MainWindow::on_pushButton_Clear_clicked()
{
    //ui->lineEdit->clear();
    R=0;
    int temp = ui->lineEdit->text().toInt();
    ui->lineEdit->clear();
    ui->lineEdit->setText(QString::number(temp));
}


