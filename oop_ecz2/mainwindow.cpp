#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "temperature.h"
#include "QString"
#include "QDebug"
#include "QFile"
#include "QDateTime"

QFile file("history.txt");

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

        ui->textEdit->append("F:" + QString::number(temp.getF()) + " C:" + QString::number(temp.getC()) +" Time:"+ QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss"));
        qDebug() << "F:"<<temp.getF()  <<" C:"<< temp.getC();
    }
    if (ui->lineEdit_C->text() != ""){
        temp.setC(ui->lineEdit_C->text().toFloat());
        ui->lineEdit_C->setText("");
        temp.convert_CtoF();

        ui->textEdit->append("F:" + QString::number(temp.getF()) + " C:" + QString::number(temp.getC()) +" Time:"+ QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss"));
        qDebug() << "F:"<<temp.getF()  <<" C:"<< temp.getC();
    }
}
void MainWindow::on_action_2_triggered()
{
//    if ( file.open(QIODevice::WriteOnly))
//    {
//        qDebug() << ui->textEdit->toPlainText();
//        QTextStream out(&file);//поток для записи текста
//        out << ui->textEdit->toPlainText();//toHtml();
//        file.close();
//    }

    qDebug() << file.isOpen();
    if ((file.exists())&&(file.open(QIODevice::Append)))
    {
        qDebug() << file.isOpen();
        QTextStream out(&file);//поток для записи текста
        out << "\n" + ui->textEdit->toPlainText();
        file.close();
    }
}

void MainWindow::on_action_triggered()
{
    qDebug() << file.isOpen();
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        qDebug() << file.isOpen();
        ui->textEdit->setText(file.readAll());
        file.close();
    }
}
