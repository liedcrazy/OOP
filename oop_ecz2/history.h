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
    void save(QString s);
    QString load();
};

#endif // HISTORY_H
