#include <QGraphicsView>
#include <QDebug>

#include "widget.h"
#include <QApplication>


int main(int argc, char *argv[]){
    QApplication a(argc, argv);

//    Вместо описания главного окна используем виджет,
//    построенный на основе QGraphicsView
//    Этот виджет будет "полотном" для рисования на нём графических объектов
//    Так как виджет всего один, необходимости в редакторе форм и  ui файле нет
//    Однако, уже созданный класс GraphicWidget можно добавить как отдельный элемент
//    в любую другую программу. Только сделать это нужно будет в ручном режиме,
//    потому как редактор форм по умолчанию предоставояет доступ только к
//    стандартным элементам интерфейса (виджетам)

    GraphicWidget w;
    w.resize(640,480);
    w.setMinimumSize(640,480);
    w.setMaximumSize(640,480);
    w.show();

    return a.exec();
}


//см. также   The Animation Framework (Qt)
