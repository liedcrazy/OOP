#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dog.h"
#include "bird.h"
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

void MainWindow::on_ButtonClear1_clicked()
{
    ui->textEditAnimals->clear();
    for (int i=0;i<animals.size();i++)
    {   Animals *n;
        n = animals[i];
        delete n;
    }
    animals.clear();

}

void MainWindow::on_ButtonDog_clicked()
{
    QString temp;
    Dog * d=new Dog();
    animals.push_back(d);
    temp = ui->textEditAnimals->toPlainText();
    temp += "Dog\n";
    ui->textEditAnimals->setText(temp);

}

void MainWindow::on_ButtonBird_clicked()
{
    QString temp;
    Bird * b=new Bird();
    animals.push_back(b);
    temp = ui->textEditAnimals->toPlainText();
    temp += "Bird\n";
    ui->textEditAnimals->setText(temp);

}

void MainWindow::on_ButtonDialogs_clicked()
{
    ui->textEditDialogs->setText("");
    for (int i=0;i<animals.size();i++)
    {
        QString temp;
        temp = ui->textEditDialogs->toPlainText();
        temp += animals[i]->speak() + "\n";
        ui->textEditDialogs->setText(temp);
    }
}

void MainWindow::on_ButtonClear2_clicked()
{
    ui->textEditDialogs->clear();
}
