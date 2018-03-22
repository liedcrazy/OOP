#include "history.h"

history::history()
{

}

void history::save(QString s){

    if (file.open(QIODevice::ReadWrite)) {
            QTextStream stream(&file);
            stream << "something" << endl;
        }
}
