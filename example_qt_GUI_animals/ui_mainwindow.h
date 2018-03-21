/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonDog;
    QPushButton *ButtonBird;
    QTextEdit *textEditAnimals;
    QPushButton *ButtonClear1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *ButtonDialogs;
    QTextEdit *textEditDialogs;
    QPushButton *ButtonClear2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(490, 478);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ButtonDog = new QPushButton(centralWidget);
        ButtonDog->setObjectName(QStringLiteral("ButtonDog"));
        ButtonDog->setMaximumSize(QSize(89, 25));

        horizontalLayout->addWidget(ButtonDog);

        ButtonBird = new QPushButton(centralWidget);
        ButtonBird->setObjectName(QStringLiteral("ButtonBird"));
        ButtonBird->setMaximumSize(QSize(89, 25));

        horizontalLayout->addWidget(ButtonBird);


        verticalLayout->addLayout(horizontalLayout);

        textEditAnimals = new QTextEdit(centralWidget);
        textEditAnimals->setObjectName(QStringLiteral("textEditAnimals"));

        verticalLayout->addWidget(textEditAnimals);

        ButtonClear1 = new QPushButton(centralWidget);
        ButtonClear1->setObjectName(QStringLiteral("ButtonClear1"));
        ButtonClear1->setMaximumSize(QSize(89, 25));

        verticalLayout->addWidget(ButtonClear1);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        ButtonDialogs = new QPushButton(centralWidget);
        ButtonDialogs->setObjectName(QStringLiteral("ButtonDialogs"));

        horizontalLayout_2->addWidget(ButtonDialogs);


        verticalLayout_2->addLayout(horizontalLayout_2);

        textEditDialogs = new QTextEdit(centralWidget);
        textEditDialogs->setObjectName(QStringLiteral("textEditDialogs"));

        verticalLayout_2->addWidget(textEditDialogs);

        ButtonClear2 = new QPushButton(centralWidget);
        ButtonClear2->setObjectName(QStringLiteral("ButtonClear2"));

        verticalLayout_2->addWidget(ButtonClear2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 490, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ButtonDog->setText(QApplication::translate("MainWindow", "Dog", Q_NULLPTR));
        ButtonBird->setText(QApplication::translate("MainWindow", "Bird", Q_NULLPTR));
        ButtonClear1->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Speak", Q_NULLPTR));
        ButtonDialogs->setText(QApplication::translate("MainWindow", "Dialogs", Q_NULLPTR));
        ButtonClear2->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
