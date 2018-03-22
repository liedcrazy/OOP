#include "history.h"

history::history()
{

}

void history::save(QString s){
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(s);
        file.close();
    }
}

QString history::load(){
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        return file.readAll();
        file.close();
    }
}
