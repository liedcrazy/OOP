#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "temperature.h"
#include "QString"
#include "QDebug"

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

void MainWindow::on_pushButton_clicked()
{
    temperature temp;
    if (ui->lineEdit_F->text() != ""){
        temp.setF(ui->lineEdit_F->text().toFloat());
        ui->lineEdit_F->setText("");
        temp.convert_FtoC();

        ui->textEdit->append("F:" + QString::number(temp.getF()) + " C:" + QString::number(temp.getC()));
        qDebug() << "F:"<<temp.getF()  <<" C:"<< temp.getC();
    }
    if (ui->lineEdit_C->text() != ""){
        temp.setC(ui->lineEdit_C->text().toFloat());
        ui->lineEdit_C->setText("");
        temp.convert_CtoF();

        ui->textEdit->append("F:" + QString::number(temp.getF()) + " C:" + QString::number(temp.getC()));
        qDebug() << "F:"<<temp.getF()  <<" C:"<< temp.getC();
    }


}
