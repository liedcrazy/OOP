#include <QDebug>
#include "widget.h"
//#include "ui_widget.h"

GraphicWidget::GraphicWidget(QWidget *parent) : QGraphicsView(parent)
{
    // Задаём поверхность (сцену, 2D мир) который будет нарисаван QGraphicsView
    this->setScene(&scene);
    scene.setSceneRect(0,0,this->width()-2,this->height()-2);
    // Добавляем Прямоугольник на сцену
    my_item = scene.addRect(this->width()/2 - item_size/2, this->height()/2 - item_size/2, item_size, item_size, QPen(QColor(Qt::blue)), QBrush(QColor(Qt::red)));
    // Добавление Круга на сцену
    other_item = scene.addEllipse(this->width()/3 - item_size/2, this->height()/3 - item_size/2, item_size/2,item_size/2, QPen(), QBrush(QColor(Qt::green)));
    v = QVector2D(1,1);

    //Создание таймера
    timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, this, &GraphicWidget::update); //подключаем сигнал таймера со слотом обновления
    timer->start(1000/30);

}




GraphicWidget::~GraphicWidget()
{

}


void GraphicWidget::update(){
    //auto x =other_item->pos().x(); //позиция х прямоугольника не используются
    //auto y =other_item->pos().y(); //позиция у прямоугольника
    if (other_item->pos().x() > 80  ||  other_item->pos().y() > 80)
        v = -QVector2D(abs(v.x()),  abs(v.y())); //v = -(|x|,|y|)

    if (other_item->pos().x() < 0   ||  other_item->pos().y() < item_size)
        v = QVector2D(abs(v.x()),  abs(v.y()));

    this->other_item->setPos( other_item->pos() + v.toPointF());

    for(int i=0;i<items.size();i++){
        other_items = items[i];
        other_items->setPos( other_items->pos() + v.toPointF());
    }

}

// Переопределённый обработчик нажатия клавишы
// При нажатии клавиши меняем позицию квадрата
void GraphicWidget::keyPressEvent(QKeyEvent *event){
    short v = 5; //двубайтовое целое

    switch ( event->key() ){ //проверка

        case Qt::Key_Up:
            my_item->moveBy(0, -v);
            break;

        case Qt::Key_Down:
            my_item->moveBy(0, v);
            break;

        case Qt::Key_Right:
            my_item->moveBy(v, 0);
            break;

        case Qt::Key_Left:
            my_item->moveBy(-v, 0);
            break;

    }
}
void GraphicWidget::mousePressEvent(QMouseEvent *event){

   other_items = scene.addEllipse(event->x() - item_size/4, event->y() - item_size/4, item_size/2,item_size/2, QPen(), QBrush(QColor(Qt::blue)));
   items.push_back(other_items);
}


