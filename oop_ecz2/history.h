#ifndef HISTORY_H
#define HISTORY_H
#include "QString"
#include "QFile"

class history
{
private:
    QString filename = "history.txt";
    QFile file(filename);
public:
    history();
    void save_h(QString s);
    QString load_h();
};

#endif // HISTORY_H
